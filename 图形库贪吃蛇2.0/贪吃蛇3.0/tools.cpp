#include"snake.h"
void InitSnake(Snake *s)
{
	s->x = 17;
	s->y = 6;
	s->next = NULL;
	s->pre = NULL;
}
void ShowManp(Snake *head, Food *food, int wing, int score, FILE *fp, Wing *user,Wall *wall)
{

	Snake *pt;Wall *pt1 = wall;
	setfillcolor(EGERGB(0x30, 00, 0xFF));
	bar(0, 0, 24 * B, B);
	bar(0, 0, B, 24 * B);
	bar(0, 23 * B, 24 * B, 24 * B);
	bar(23 * B, 0, 24 * B, 24 * B);
	while (pt1)
	{
		bar(pt1->x*B, pt1->y*B, (pt1->x + 1)*B, (pt1->y + 1)*B);
		pt1 = pt1->next;
	}
	pt = head;
	while (pt)
	{
		if (pt == head)
			setfillcolor(EGERGB(0x60, 0x60, 00));
		else
			setfillcolor(EGERGB(00, 0x60, 0x60));
		bar(pt->x*B, pt->y*B, (pt->x + 1)*B, (pt->y + 1)*B);
		pt = pt->next;
	}
	setfillcolor(EGERGB(0xFF, 0x50, 00));
	bar(food->x*B, food->y*B, (food->x + 1)*B, (food->y + 1)*B);
	fread(user, sizeof(Wing), 1, fp);
	setcolor(EGERGB(00, 0x90, 0xFF));
	setfont(18, 0, "宋体");
	setbkmode(TRANSPARENT);
	if (wing != 0)
	{

		outtextxy(500, 60, "历史缔造者:");
		outtextxy(510, 90, user->name);
		outtextxy(500, 200, "最高分数 :");
		char str[10];
		sprintf(str, "%d", user->score);
		outtextxy(520, 230, str);
	}

	else
		outtextxy(520, 230, "暂无记录!");
	outtextxy(500, 300, "当前分数:");
	char tr1[10];
	sprintf(tr1, "%d", score);
	outtextxy(520, 330, tr1);
	outtextxy(500, 360, "暂停请按space!");
}
int SnakeEatFood(Snake *head, Food *food)
{
	if (head->x == food->x&&head->y == food->y)
		return 1;
	else
		return 0;
}
void CreatFood(Food *food)
{
	food->x = random(Wide) + 1;
	food->y = random(Lenth) + 1;
}
Snake* CreatRear(Snake *head)
{
	Snake *pt = head, *p;
	p = (Snake *)malloc(sizeof(Snake));
	p->next = NULL;
	while (pt->next)
		pt = pt->next;
	pt->next = p;
	p->pre = pt;
	return p;
}
char GetDirection(char c)
{
	char c1, c2;
	c2 = c1 = getch();
	if (c2 == ' ')
	{
		c2 = '1';
		outtextxy(200, 200, "游戏已暂停，按space继续游戏");
		while (c2 != ' ')
			c2 = getch();
	}
	else
	{
		if (c1 == 'w'&&c != 's')    c = c1;
		else if (c1 == 's'&&c != 'w')  c = c1;
		else if (c1 == 'a'&&c != 'd')  c = c1;
		else if (c1 == 'd'&&c != 'a')  c = c1;
		return c;
	}
	return c;
}
void SnakeMove(Snake *head, Snake *rear, char c)
{
	Snake *pt = rear;
	while (pt != head)
	{
		pt->x = pt->pre->x;
		pt->y = pt->pre->y;
		pt = pt->pre;
	}
	if (c == 'w') head->y -= 1;
	else if (c == 's') head->y += 1;
	else if (c == 'a') head->x -= 1;
	else if (c == 'd') head->x += 1;
}
int JudgeGame(Snake *head,Wall *wall)
{
	Snake *pt = head->next;
	Wall *pt2 = wall;
	if (head->x > Wide || head->x<1 || head->y > Lenth || head->y<1)
		return 1;
	while (pt)
	{

		if (pt->x == head->x&&pt->y == head->y)
			return 1;
		pt = pt->next;
	}
	while (pt2)
	{
		if (pt2->x == head->x&&pt2->y == head->y)
			return 1;
		pt2 = pt2->next;
	}
	return 0;
}
void SetFood(Snake *head, Food *food)
{
	if (head->x + 1 >Lenth)
	{
		food->x = 1;
		food->y = head->y;
	}
	else
	{
		food->x = head->x + 1;
		food->y = head->y;
	}
}
int TestFood(Snake *head, Food *food,Wall *wall)
{
	int test = 0, flag ,flag1;
	Snake *pt = head;
	Wall *pt1 = wall;
	while (test <= 3)
	{
		flag = 0;
		while (pt)
		{
			if (food->x == pt->x&&food->y == pt->y)
			{
				CreatFood(food);
				test++;
				flag = 1;
				break;
			}
			pt = pt->next;
		}
		while (pt1)
		{
			flag1 = 0;
			if (food->x == pt1->x&&food->y == pt1->y)
			{
				CreatFood(food);
				test++;
				flag1 = 1;
				break;
			}
			pt1 = pt1->next;
		}
		if (flag == 0&&flag1==0)
			return 0;
	}
	return 1;
}
void Loginsystem()
{
	char name[10], password[10];
	int wrong = 0;
	Login *login = NULL, *p, *q, *lo, newer;
	FILE *fp1;
	setfont(24, 0, "宋体");
	setcolor(RED);
	int set = 0;
	if ((fp1 = fopen("d:\\login.dat", "r+")) == NULL)
		set = 1;
	else
	{
		if ((fp1 = fopen("d:\\login.dat", "ab+")) == NULL)
		{

			outtextxy(200, 200, "无法打开文件!");
			getch();
			return;
		}
		while (1)
		{
			p = (Login *)malloc(sizeof(Login));
			p->next = NULL;
			fread(p, sizeof(Login), 1, fp1);
			if (login == NULL)
				login = q = p;
			else
			{
				q->next = p;
				q = p;
			}
			if (q->next == NULL)
				break;
		}
		if (MessageBoxA(0, "请问你是否注册？", "选择",MB_SETFOREGROUND| MB_ICONQUESTION | MB_YESNO) == IDNO)
		{
			while (1)
			{
				inputbox_getline("请输入", "请输入已有用户名：", name, 10);
				getchar();
				lo = login;
				while (lo)
				{
					if (strcmp(name, lo->name) == 0)
						break;
					lo = lo->next;
				}
				if (lo)
					if (strcmp(name, lo->name) == 0)
						break;
				if (lo == NULL)
				{
					if (IDNO == MessageBoxA(NULL, "用户不存在请问是否注册为新用户？", "选择", MB_ICONQUESTION | MB_YESNO));
					else
					{
						set = 2;
						break;
					}
				}
			}
			if (set != 2)
			{
				while (1)
				{
					if (wrong == 0)
						inputbox_getline("请输入", "请输入密码：", password, 10);
					else
						inputbox_getline("请输入", "请重新输入正确密码：", password, 10);
					if (strcmp(password, lo->password) == 0)
						break;
					else
						wrong = 1;
				}
			}
		}
		else
			set = 2;
	}
	if (set == 2)
	{
		int tm = 0, flag1 = 0;
		while (1)
		{
			newer.next = &newer;
			//fseek(fp1, sizeof(Login), 1);
			if (tm == 0)

				inputbox_getline("请输入", "请输入注册用户名：：", newer.name, 10);
			else
				inputbox_getline("请输入", "该用户名已存在请重新输入注册用户名：：", newer.name, 10);
			lo = login;
			tm++;
			while (lo)
			{
				flag1 = 0;
				if (strcmp(newer.name, lo->name) == 0)
				{
					flag1 = 1;
					break;
				}
				lo = lo->next;
			}
			if (flag1 == 0)
			{
				inputbox_getline("请输入", "请输入密码：", newer.password, 10);
				fwrite(&newer, sizeof(Login), 1, fp1);
				fclose(fp1);
				break;
			}
		}
	}
	else if (set == 1)
	{
		if ((fp1 = fopen("d:\\login.dat", "w")) == NULL)
		{
			outtextxy(200, 200, "文件创建错误!");
			getch();
			return;
		}
		newer.next = &newer;
		inputbox_getline("请输入", "当前还没有用户请输入注册用户名：", newer.name, 10);
		inputbox_getline("请输入", "请输入密码:", newer.password, 10);
		fwrite(&newer, sizeof(Login), 1, fp1);
		fclose(fp1);
	}
	cleardevice();
}
Wall *creatWall()
{
	Wall *p, *q, *wall;
	int i = 0;
	for (; i <= 19; i++)
	{
		q = (Wall*)malloc(sizeof(Wall));
		q->next = NULL;
		if (i == 0)
		{
			wall = p = q;
			q->x = 5; q->y = 4;
		}
		else if (i > 0 && i <= 4)
		{
			static int j1 = 6;
			p->next = q;
			q->x = j1++;
			q->y = 4;
			p = q;
		}
		else if (i > 4 && i <= 16)
		{
			static int j2 = 5;
			p->next = q;
			q->x = 9;
			q->y = j2++;
			p = q;
		}
		else if (i > 16 && i <= 19)
		{
			static int j3 = 10;
			p->next = q;
			q->x = j3++;
			q->y = 15;
			p = q;
		}
	}
	return wall;
}
