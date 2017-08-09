#include"snake.h"
int main()
{
	initgraph(640, 480);
	HWND hWnd = getHWnd();	// 获得窗口句柄
	SetWindowText(hWnd, TEXT("贪吃蛇  作者：黄涛"));	// 使用 API 函数修改窗口名称
	PIMAGE img = newimage(), img1 = newimage();
	int wing, score, speed, _score, time = 0, bottom, V;
	Wing user;
	FILE *fp;
	char c = 's';
	Snake snake, *head, *rear;
	Food food = { 5,5 };
	Wall *wall;
	wall=creatWall();
	Loginsystem();
	int bjn, cm;
	while (1)
	{
		randomize();
		bjn = random(19) + 1;       //用随机数选取背景图片
		cm = random(9) + 1;
		char beijing[30], cemian[30];
		sprintf(beijing, "\\资源\\背景\\背景%d.jpg", bjn);    // 将数字转换为字符类型并保存路径
		sprintf(cemian, "\\资源\\背景\\侧面%d.jpg", cm);
		getimage(img, beijing);
		getimage(img1, cemian);
		int imgh, img1h, imgw, img1w;
		imgh = getheight(img);
		imgw = getwidth(img);
		img1h = getheight(img1);
		img1w = getwidth(img1);
		while (1)
		{
			putimage(0, 0, 640, 480, img, 0, 0, imgw, imgh);
			mouse_msg msg = { 0 };
			int x, y;
			setfillcolor(EGERGB(0xDD, 0xFF, 0xFF));
			bar(100, 80, 480, 200);
			setfont(18, 0, "宋体");
			setbkmode(TRANSPARENT);
			mousepos(&x, &y);
			setcolor(EGERGB(00, 0xAA, 0xAA));
			outtextxy(100, 80, "请选择：");
			if (x >= 160 && x <= 230 && y >= 120 && y <= 138)
			{
				setcolor(BLUE);
				while (mousemsg())
					msg = getmouse();
				if (msg.is_left())
				{
					bottom = 1;
					break;
				}
			}
			else
				setcolor(EGERGB(00, 0xAA, 0xAA));
			outtextxy(160, 120, "开始游戏");
			if (x >= 280 && x <= 350 && y >= 120 && y <= 138)
			{
				setcolor(BLUE);
				while (mousemsg())
					msg = getmouse();
				if (msg.is_left())
				{
					bottom = 2;
					break;
				}
			}
			else
				setcolor(EGERGB(00, 0xAA, 0xAA));
			outtextxy(280, 120, "退出游戏");
			delay_fps(30);
			cleardevice();
		}
		if (bottom == 2)
			return 0;
		while (1)
		{
			putimage(0, 0, 640, 480, img, 0, 0, imgw, imgh);
			mouse_msg msg = { 0 };
			int x, y;
			bar(100, 80, 480, 200);
			setfont(18, 0, "宋体");
			setbkmode(TRANSPARENT);
			mousepos(&x, &y);
			setcolor(EGERGB(00, 0xAA, 0xAA));
			outtextxy(100, 80, "请选择(难度越高分数越高哦)：");
			if (x >= 160 && x <= 185 && y >= 120 && y <= 138)
			{
				setcolor(BLUE);
				while (mousemsg())
					msg = getmouse();
				if (msg.is_left())
				{
					V = 1;
					break;
				}
			}
			else
				setcolor(EGERGB(00, 0xAA, 0xAA));
			outtextxy(160, 120, "简单");
			if (x >= 250 && x <= 295 && y >= 120 && y <= 138)
			{
				setcolor(BLUE);
				while (mousemsg())
					msg = getmouse();
				if (msg.is_left())
				{
					V = 2;
					break;
				}
			}
			else
				setcolor(EGERGB(00, 0xAA, 0xAA));
			outtextxy(250, 120, "一般");
			if (x >= 340 && x <= 385 && y >= 120 && y <= 138)
			{
				setcolor(BLUE);
				while (mousemsg())
					msg = getmouse();
				if (msg.is_left())
				{
					V = 3;
					break;
				}
			}
			else
				setcolor(EGERGB(00, 0xAA, 0xAA));
			outtextxy(340, 120, "困难");
			delay_fps(30);
		}
		switch (V)
		{
		case 1:speed = 350, _score = 1;  break;
		case 2:speed = 250, _score = 2; break;
		case 3:speed = 150, _score = 3; break;
		}
		score = 0;
		if ((fp = fopen("d:\\snake.dat", "r+")) == NULL)
			wing = 0;
		else
			wing = 1;
		if (wing == 0)
			if ((fp = fopen("d:\\snake.dat", "w")) == NULL)
			{
				setfont(40, 0, "宋体");
				cleardevice();
				outtextxy(400, 200, "文件无法创建!");
				return 0;
			}
		InitSnake(&snake);
		head = rear = &snake;
		while (1)
		{
			putimage(0, 0, 640, 480, img, 0, 0, imgw, imgh);
			putimage(480, 0, 160, 480, img1, 0, 0, img1w, img1h);
			ShowManp(head, &food, wing, score, fp, &user,wall);
			if (SnakeEatFood(head, &food))
			{
				time++;
				if (time % 5 == 0 && speed >= 60)    //没吃到五个食物之后会自动加速
					speed -= 10;
				score += _score;
				CreatFood(&food);
				if (TestFood(head, &food,wall))
					SetFood(head, &food);
				rear = CreatRear(head);
			}
			if (kbhit())  c = GetDirection(c);
			SnakeMove(head, rear, c);
			if (JudgeGame(head,wall))
			{
				break;
			}
			delay_ms(speed);
		}
		cleardevice();
		if (wing == 0)
		{
			setfont(40, 0, "宋体");
			cleardevice();
			inputbox_getline("请输入", "此游戏人迹罕至，你是第一个！请留下大名！", user.name, 10);
			user.score = score;
			fwrite(&user, sizeof(Wing), 1, fp);
		}
		else
		{
			if (user.score < score)
			{
				inputbox_getline("请输入", "大侠好手速，历史由你缔造，应当留下什么？", user.name, 10);
				user.score = score;
				fwrite(&user, sizeof(Wing), 1, fp);
			}
		}
		fclose(fp);
		char ch;
		setfont(25, 0, "宋体");
		outtextrect(200, 200, 300, 240, "    游戏结束！\n按esc退出,任意键继续");
		ch = getch();
		if (ch == key_esc)
			break;
	}
	delimage(img1);
	delimage(img);
	closegraph();
	return 0;
}
