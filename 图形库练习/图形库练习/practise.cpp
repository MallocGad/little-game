
//#define SHOW_CONSOLE  //使控制台 （字符）窗口 和 ege的(图形)窗口同时出现
/*#include<graphics.h>
#include<stdio.h>
int main()
{
	PIMAGE img;
	initgraph(640, 480);
	//setbkcolor(EGERGB(00, 0X40, 00));  //设置背景颜色
	//setcolor(EGERGB(00,0xFF,00));  //设置画图的原色
	//setfillcolor(EGERGB(0xFF, 00, 00));//设置填充颜色 
	//line(300, 20, 300, 200);  //画线
	//bar(50, 100, 300, 200);  //画实心矩形
	//fillellipse(200, 200, 150, 100);//画一个实心椭圆
	//circle(500, 200, 100);//画一个空心圆
	//setcolor(EGERGB(00, 0XFF, 00));   //也可以改变文字颜色 把文字当作画的图
	//setfillcolor(EGERGB(00, 00, 50));
	//setfontbkcolor(EGERGB(0x80, 0x00, 0x80));//文字背景色 setbkcolor也可以改变文字背景色
	//setfont(18, 0, "宋体");   //设置字体 参数分别代表 文字像素高度，宽度  0代表为默认比列
	//outtextxy(100, 100, "欢迎使用图形库");  //写文字 此函数不支持\t \n这类格式化字符  会被忽略
	//outtextrect(100, 120, 200, 100, "\t欢迎使用图形库");
	//setbkmode(TRANSPARENT);   //设置文字背景填充方式为透明 默认为OPAQUE不透明
	//outtextxy(100, 150, "你家妈拉个波");
	//floodfill(500, 200, EGERGB(0xFF, 0xFF, 0x0));//!!这个函数使用居然有问题！！！！
	//sector(200, 200, 45, 135, 150, 100);
	//setbkcolor(EGERGB(0X00, 00, 40));
	//setviewport(200, 100, 330, 130, 1);//设置视口矩形（200，100）—（330，130）最后一个参数为1代表超出这个区域的图被截去
	//setcolor(GREEN);
	//setfontbkcolor(RGB(0X80, 0X00, 0X80));
	//setfont(18, 0, "宋体");
	//outtextxy(0, 0, "hello to ege");
	//setbkmode(TRANSPARENT);
	//outtextxy(0, 20, "hello use ege");
	//setviewport(0, 0, getwidth(), getheight(), 1);//还原视口  第三个第四个就是初始化试图的宽高
	//outtextxy(0, 0, "hello ege graphics");
	//img = newimage();
	//getimage(img, 0, 0, 160, 120);
	//setbkcolor(EGERGB(0xff,00,00),img);
	//setfillcolor(EGERGB(0x0, 0x70, 0x0),img);
	//bar(40, 20, 70, 50, img);
	//setbkcolor(EGERGB(0x80, 0x80, 0x80));
	//cleardevice();
	//putimage(0, 0, img);
	//putimage_alphablend(NULL, img, 160, 0, 0x80); //半透明度为0x80 
	/*int putimage_alphablend(
		PIMAGE imgdest,         // handle to dest
		PIMAGE imgsrc,          // handle to source
		int nXOriginDest,       // x-coord of destination upper-left corner
		int nYOriginDest,       // y-coord of destination upper-left corner
		unsigned char alpha,    // alpha
		int nXOriginSrc = 0,    // x-coord of source upper-left corner
		int nYOriginSrc = 0,    // y-coord of source upper-left corner
		int nWidthSrc = 0,      // width of source rectangle
		int nHeightSrc = 0      // height of source rectangle
	); 这个函数用于对两张图片进行半透明混合，并把混合结果写入目标图片。
	参数：imgdest
		要进行半透明混合的目标图片，如果为NULL则表示操作窗口上的图片

		imgsrc
		要进行半透明混合的源图片，该操作不会改变源图片

		nXOriginDest, nYOriginDest
		要开始进行混合的目标图片坐标，该坐标是混合区域的左上角

		alpha
		透明度值，如果为0x0，表示源图片完全透明，如果为0xFF，表示源图片完全不透明。

		nXOriginDest, nYOriginDest, nWidthDest, nHeightDest
		描述要进行此操作的源图矩形区域。如果nWidthDest和nHeightDest 为0，表示操作整张图片。
		*/
	//putimage_transparent(NULL, img, 0, 80, BLACK);	//透明贴图，关键色为BLACK，源图为这个颜色的地方会被忽略
	//putimage_alphatransparent(NULL, img, 160, 80, BLACK, 0xA0); //同时使用透明和半透明
    /*int x, y;
	for (y = 0; y < 1; y++)
	{
		for (x = 0; x < 1; x++)
		{
			//把img整个画在指定坐标，左上角对其这个坐标
			//putimage(x * 80, y * 60, img);//还有第四个参数输出方式  图像的或与非等运算   下同
			//putimage(x * 80, y * 60, 80, 60, img, 0, 0, 160, 120);//参数3和4：将原图像放缩为多少  后四个参数原图像位置大小
		}
	}
	//delimage(img);  img 不用了要delimage
	key_msg  k = { 0 };
	for (; k.key != key_esc;)
	{
		char str[32];
		//if(kbmsg())//判断是否按键
		k = getkey();
		sprintf(str, "key=%c %3d  %2x msg=%d  flag=%d", k.key, k.key, k.key, k.msg, k.flags);
		cleardevice();
		outtextxy(0, 0, str);
	}
	for (; is_run(); delay_fps(50))  //delay_fps(n) 就延迟1/n秒
	{
		char str[32];
		int x, y;
		mousepos(&x, &y);
		sprintf(str, "%4d %4d", x, y);
		outtextxy(0, 0, str);
	}*/
	/*mouse_msg msg = {0};
	for (; is_run(); delay_fps(60))
	{
		//获取鼠标消息，这个函数会等待，等待到有消息为止
		//类似地，有和kbhit功能相近的函数MouseHit，用于检测有没有鼠标消息
		while (mousemsg())
		{
			msg = getmouse();
		}

		//格式化输出为字符串，用于后面输出
		//msg和flag常数请参考文档或者mouse_msg_e, mouse_flag_e的声明

		cleardevice();
		xyprintf(0, 0, "x = %10d  y = %10d",msg.x, msg.y, msg.wheel);
		xyprintf(0, 20, "move  = %d down  = %d up    = %d",
			(int)msg.is_move(),
			(int)msg.is_down(),
			(int)msg.is_up());
		xyprintf(0, 40, "left  = %d mid   = %d right = %d",
			(int)msg.is_left(),
			(int)msg.is_mid(),
			(int)msg.is_right());
		xyprintf(0, 60, "wheel = %d  wheel rotate = %d",
			(int)msg.is_wheel(),
			msg.wheel);
	}*/
	/*char str[100];
	int a = 1;
	//调用对话框函数
	inputbox_getline("请输入", "你爱输入什么就输入什么（回车确认）", str, 100);

	//显示输入的内容
	outtextxy(0, 0,str );

	getch();
	ege::closegraph();
	return 0;
}*/
#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
#define File "E:\\贪吃蛇.txt"

#define U 1//表示宏定义一个变量u，并初始化值为1.用来表示up的意思
#define D 2
#define L 3 
#define R 4       //蛇的状态，U：上 ；D：下；L:左 R：右

typedef struct SNAKE //蛇身的一个节点
{
	int x;
	int y;
	struct SNAKE *next;
}snake;

//全局变量//
int score = 0, add = 10;//总得分与每次吃食物得分。
int status, sleeptime = 300;//每次运行的时间间隔
snake *head, *food;//蛇头指针，食物指针
snake *q;//遍历蛇的时候用到的指针
int endgamestatus = 0; //游戏结束的情况，1：撞到墙；2：咬到自己；3：主动退出游戏。

					   //声明全部函数//
void Pos();//设置光标位置函数
void creatMap();//创建地图函数
void initsnake();//初始化蛇身函数
int biteself();//判断是否咬到自己函数
void createfood();//设置食物随机出现函数
void cantcrosswall();//不能穿墙函数
void snakemove();//蛇移动的函数
void pause();//暂停函数
void gamecircle();//控制游戏函数
void welcometogame();//进入游戏界面函数
void endgame();//结束游戏函数
void gamestart();//游戏初始化函数
void loadRecord();
void saveProgress();

void Pos(int x, int y)//设置光标位置
{
	COORD pos;
	HANDLE hOutput;
	pos.X = x;
	pos.Y = y;
	hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOutput, pos);//使光标到(x,y)位置上
}

void creatMap()//创建地图
{
	int i;
	for (i = 0; i<58; i += 2)//打印上下边框
	{
		Pos(i, 0);
		printf("■");
		Pos(i, 26);
		printf("■");
	}
	for (i = 8; i<30; i += 2)//打印地图中横线
	{
		Pos(i, 4);
		printf("■");
	}
	for (i = 30; i<54; i += 2)//打印地图中横线
	{
		Pos(i, 22);
		printf("■");
	}
	for (i = 4; i<22; i++)//打印地图中竖线
	{
		Pos(30, i);
		printf("■");
	}
	for (i = 1; i<26; i++)//打印左右边框
	{
		Pos(0, i);
		printf("■");
		Pos(56, i);
		printf("■");
	}
}

void initsnake()//初始化蛇身
{
	snake *tail;
	int i;
	tail = (snake*)malloc(sizeof(snake));//从蛇尾开始，头插法，以x,y设定开始的位置//
	tail->x = 10;
	tail->y = 15;
	tail->next = NULL;
	for (i = 1; i <= 2; i++)//打印蛇身，设定长度
	{
		head = (snake*)malloc(sizeof(snake));
		head->next = tail;
		head->x = 10;
		head->y = 15 + i;
		tail = head;
	}
	while (tail != NULL)//从头到尾，输出蛇身
	{
		Pos(tail->x, tail->y);
		printf("■");
		tail = tail->next;
	}
	status = R;
}

int biteself()//判断是否咬到了自己
{
	snake *self;
	self = head->next;
	while (self != NULL)
	{
		if (self->x == head->x && self->y == head->y)
		{
			return 1;
		}
		self = self->next;
	}
	return 0;
}

void coincidence()//保证蛇头与食物一致函数
{
	srand((unsigned)time(NULL));
	do
	{
		food->x = rand() % 52 + 2;
	} while ((food->x % 2) != 0);    //保证其为偶数，使得食物能与蛇头对齐
	food->y = rand() % 25 + 1;
}

void createfood()//随机出现食物
{
	coincidence();
	q = head;
	while (q->next != NULL)
	{
		while (q->x == food->x && q->y == food->y) //判断蛇身是否与食物重合
		{
			coincidence();
		}
		q = q->next;
	}
	while (food->x == 30 && food->y >= 4 && food->y <= 21)
	{
		coincidence();
	}
	while (food->x >= 8 && food->x <= 30 && food->y == 4)
	{
		coincidence();
	}
	while (food->x >= 30 && food->x <= 52 && food->y == 22)
	{
		coincidence();
	}
	Pos(food->x, food->y);
	printf("■");
}

void cantcrosswall()//不能穿墙
{
	if (head->x == 0 || head->x == 56 || head->y == 0 || head->y == 26)
	{
		endgamestatus = 1;
		endgame();
	}
	if (head->x == 30 && head->y >= 4 && head->y <= 21)
	{
		endgamestatus = 1;
		endgame();
	}
	if (head->x >= 8 && head->x <= 30 && head->y == 4)
	{
		endgamestatus = 1;
		endgame();
	}
	if (head->x >= 30 && head->x <= 52 && head->y == 22)
	{
		endgamestatus = 1;
		endgame();
	}
}

void snakemove()//蛇前进,上U,下D,左L,右R
{
	snake * nexthead;
	cantcrosswall();

	nexthead = (snake*)malloc(sizeof(snake));
	if (status == U)
	{
		nexthead->x = head->x;
		nexthead->y = head->y - 1;
	}
	if (status == D)
	{
		nexthead->x = head->x;
		nexthead->y = head->y + 1;
	}
	if (status == L)
	{
		nexthead->x = head->x - 2;
		nexthead->y = head->y;
	}
	if (status == R)
	{
		nexthead->x = head->x + 2;
		nexthead->y = head->y;
	}
	if (nexthead->x == food->x && nexthead->y == food->y)//如果下一个有食物//
	{
		nexthead->next = head;
		head = nexthead;
		q = head;
		while (q != NULL)
		{
			Pos(q->x, q->y);
			printf("■");
			q = q->next;
		}
		score = score + add;
		createfood();
	}
	else                                               //如果没有食物//
	{
		nexthead->next = head;
		head = nexthead;
		q = head;
		while (q->next->next != NULL)
		{
			Pos(q->x, q->y);
			printf("■");
			q = q->next;
		}
		Pos(q->next->x, q->next->y);
		printf("  ");
		free(q->next);
		q->next = NULL;
	}
	if (biteself() == 1)       //判断是否会咬到自己
	{
		endgamestatus = 2;
		endgame();
	}
}

void pause()//暂停
{
	while (1)
	{
		Sleep(300);
		if (GetAsyncKeyState(VK_SPACE))
			break;
	}
}

void gamecircle()//控制游戏        
{

	Pos(64, 15);
	printf("不能穿墙，不能咬到自己\n");
	Pos(64, 16);
	printf("用↑.↓.←.→分别控制蛇的移动.");
	Pos(64, 17);
	printf("F1 为加速，F2 为减速\n");
	Pos(64, 18);
	printf("ESC ：退出游戏.space：暂停游戏.");
	Pos(64, 20);
	while (1)
	{
		Pos(64, 10);
		printf("得分：%d  ", score);
		Pos(64, 11);
		printf("每个食物得分：%d分", add);
		if (GetAsyncKeyState(VK_UP) && status != D)
		{
			status = U;
		}
		else if (GetAsyncKeyState(VK_DOWN) && status != U)
		{
			status = D;
		}
		else if (GetAsyncKeyState(VK_LEFT) && status != R)
		{
			status = L;
		}
		else if (GetAsyncKeyState(VK_RIGHT) && status != L)
		{
			status = R;
		}
		else if (GetAsyncKeyState(VK_SPACE))
		{
			pause();
		}
		else if (GetAsyncKeyState(VK_ESCAPE))
		{
			endgamestatus = 3;
			break;
		}
		else if (GetAsyncKeyState(VK_F1))
		{
			if (sleeptime >= 50)
			{
				sleeptime = sleeptime - 30;
				add = add + 2;
				if (sleeptime == 320)
				{
					add = 2;//防止减到1之后再加回来有错
				}
			}
		}
		else if (GetAsyncKeyState(VK_F2))
		{
			if (sleeptime<350)
			{
				sleeptime = sleeptime + 30;
				add = add - 2;
				if (sleeptime == 350)
				{
					add = 1;  //保证最低分为1
				}
			}
		}
		Sleep(sleeptime);
		snakemove();
	}
}

void welcometogame()//开始界面
{
	system("color 0C");
	Pos(40, 12);
	printf("     =====欢迎使用贪吃蛇游戏=====\n\n");
	Pos(40, 25);
	system("pause");
	system("cls");
	Pos(25, 12);
	printf("用↑.↓.←.→分别控制蛇的移动， F1 为加速，F2 为减速\n");
	Pos(25, 15);
	printf("加速将能得到更高的分数。\n");
	system("pause");
	system("cls");
}

void endgame()//结束游戏
{

	system("cls");
	Pos(24, 12);
	if (endgamestatus == 1)
	{
		printf("对不起，您撞到墙了。游戏结束.");
	}
	else if (endgamestatus == 2)
	{
		printf("对不起，您咬到自己了。游戏结束.");
	}
	else if (endgamestatus == 3)
	{
		printf("您已经结束了游戏。");
		saveProgress();
	}
	Pos(24, 13);
	printf("您的得分是%d", score);
	Pos(24, 15);
	printf("请按ESC键退出游戏\n");
	while (getch() != 27);
	exit(0);
}

void resume()
{
	Pos(food->x, food->y);
	printf("■");
	q = head;
	while (q != NULL)
	{
		Pos(q->x, q->y);
		printf("■");
		q = q->next;
	}
}

void loadRecord()
{
	FILE *fp;
	snake *p;
	if ((fp = fopen(File, "r+")) == NULL)
		initsnake();
	else
	{
		fscanf(fp, "%5d%3d%2d%4d", &score, &add, &status, &sleeptime);
		fread(food, sizeof(snake), 1, fp);
		head = (snake*)malloc(sizeof(snake));
		fread(head, sizeof(snake), 1, fp);
		q = head;
		while (!feof(fp))
		{
			p = q;
			q->next = (snake*)malloc(sizeof(snake));
			fread(q->next, sizeof(snake), 1, fp);
			q = q->next;
		}
		free(q);
		p->next = NULL;
		fclose(fp);
	}
}

void saveProgress()
{
	FILE *fp = fopen(File, "w");
	if ((fp = fopen(File, "r+")) == NULL)
	{
		Pos(24, 14);
		printf("存储记录失败！");
		return;
	}
	else
	{
		fprintf(fp, "%5d%3d%2d%4d", score, add, status, sleeptime);
		fwrite(food, sizeof(snake), 1, fp);
		q = head;
		while (q != NULL)
		{
			fwrite(q, sizeof(snake), 1, fp);
			q = q->next;
		}
		fclose(fp);
	}
}

void displayMenu()
{
	char choice;
	while (1)
	{
		Pos(43, 9);
		printf("◇◇◇◇◇◇◇");
		Pos(45, 11);
		printf("1 开始游戏");
		Pos(45, 13);
		printf("2 继续游戏");
		Pos(45, 15);
		printf("0 退出游戏");
		Pos(43, 17);
		printf("◇◇◇◇◇◇◇");
		Pos(43, 19);
		printf("请选择操作：");
		choice = getche();
		putchar('\n');
		if (choice<'0' || choice>'2')
			continue;
		system("cls");
		switch (choice)
		{
		case '1':
			initsnake();
			createfood();
			return;
		case '2':
			loadRecord();
			resume();
			return;
		case '0':
			exit(0);
		default:
			break;
		}
	}
}

int main()
{
	system("mode con cols=100 lines=30");//调整系统Console控制台显示的宽度和高度，高度为100个字符，宽度为30个字符
	welcometogame();
	PlaySound("D:\c++\图形库练习\图形库练习\Debug\\Go Time.wav", NULL, SND_FILENAME | SND_ASYNC);

	//第七行  
	system("pause");
	food = (snake*)malloc(sizeof(snake));
	displayMenu();
	creatMap();
	gamecircle();
	endgame();
	return 0;
}