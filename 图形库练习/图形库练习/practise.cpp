
//#define SHOW_CONSOLE  //ʹ����̨ ���ַ������� �� ege��(ͼ��)����ͬʱ����
/*#include<graphics.h>
#include<stdio.h>
int main()
{
	PIMAGE img;
	initgraph(640, 480);
	//setbkcolor(EGERGB(00, 0X40, 00));  //���ñ�����ɫ
	//setcolor(EGERGB(00,0xFF,00));  //���û�ͼ��ԭɫ
	//setfillcolor(EGERGB(0xFF, 00, 00));//���������ɫ 
	//line(300, 20, 300, 200);  //����
	//bar(50, 100, 300, 200);  //��ʵ�ľ���
	//fillellipse(200, 200, 150, 100);//��һ��ʵ����Բ
	//circle(500, 200, 100);//��һ������Բ
	//setcolor(EGERGB(00, 0XFF, 00));   //Ҳ���Ըı�������ɫ �����ֵ�������ͼ
	//setfillcolor(EGERGB(00, 00, 50));
	//setfontbkcolor(EGERGB(0x80, 0x00, 0x80));//���ֱ���ɫ setbkcolorҲ���Ըı����ֱ���ɫ
	//setfont(18, 0, "����");   //�������� �����ֱ���� �������ظ߶ȣ����  0����ΪĬ�ϱ���
	//outtextxy(100, 100, "��ӭʹ��ͼ�ο�");  //д���� �˺�����֧��\t \n�����ʽ���ַ�  �ᱻ����
	//outtextrect(100, 120, 200, 100, "\t��ӭʹ��ͼ�ο�");
	//setbkmode(TRANSPARENT);   //�������ֱ�����䷽ʽΪ͸�� Ĭ��ΪOPAQUE��͸��
	//outtextxy(100, 150, "�����������");
	//floodfill(500, 200, EGERGB(0xFF, 0xFF, 0x0));//!!�������ʹ�þ�Ȼ�����⣡������
	//sector(200, 200, 45, 135, 150, 100);
	//setbkcolor(EGERGB(0X00, 00, 40));
	//setviewport(200, 100, 330, 130, 1);//�����ӿھ��Σ�200��100������330��130�����һ������Ϊ1��������������ͼ����ȥ
	//setcolor(GREEN);
	//setfontbkcolor(RGB(0X80, 0X00, 0X80));
	//setfont(18, 0, "����");
	//outtextxy(0, 0, "hello to ege");
	//setbkmode(TRANSPARENT);
	//outtextxy(0, 20, "hello use ege");
	//setviewport(0, 0, getwidth(), getheight(), 1);//��ԭ�ӿ�  ���������ĸ����ǳ�ʼ����ͼ�Ŀ��
	//outtextxy(0, 0, "hello ege graphics");
	//img = newimage();
	//getimage(img, 0, 0, 160, 120);
	//setbkcolor(EGERGB(0xff,00,00),img);
	//setfillcolor(EGERGB(0x0, 0x70, 0x0),img);
	//bar(40, 20, 70, 50, img);
	//setbkcolor(EGERGB(0x80, 0x80, 0x80));
	//cleardevice();
	//putimage(0, 0, img);
	//putimage_alphablend(NULL, img, 160, 0, 0x80); //��͸����Ϊ0x80 
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
	); ����������ڶ�����ͼƬ���а�͸����ϣ����ѻ�Ͻ��д��Ŀ��ͼƬ��
	������imgdest
		Ҫ���а�͸����ϵ�Ŀ��ͼƬ�����ΪNULL���ʾ���������ϵ�ͼƬ

		imgsrc
		Ҫ���а�͸����ϵ�ԴͼƬ���ò�������ı�ԴͼƬ

		nXOriginDest, nYOriginDest
		Ҫ��ʼ���л�ϵ�Ŀ��ͼƬ���꣬�������ǻ����������Ͻ�

		alpha
		͸����ֵ�����Ϊ0x0����ʾԴͼƬ��ȫ͸�������Ϊ0xFF����ʾԴͼƬ��ȫ��͸����

		nXOriginDest, nYOriginDest, nWidthDest, nHeightDest
		����Ҫ���д˲�����Դͼ�����������nWidthDest��nHeightDest Ϊ0����ʾ��������ͼƬ��
		*/
	//putimage_transparent(NULL, img, 0, 80, BLACK);	//͸����ͼ���ؼ�ɫΪBLACK��ԴͼΪ�����ɫ�ĵط��ᱻ����
	//putimage_alphatransparent(NULL, img, 160, 80, BLACK, 0xA0); //ͬʱʹ��͸���Ͱ�͸��
    /*int x, y;
	for (y = 0; y < 1; y++)
	{
		for (x = 0; x < 1; x++)
		{
			//��img��������ָ�����꣬���ϽǶ����������
			//putimage(x * 80, y * 60, img);//���е��ĸ����������ʽ  ͼ��Ļ���ǵ�����   ��ͬ
			//putimage(x * 80, y * 60, 80, 60, img, 0, 0, 160, 120);//����3��4����ԭͼ�����Ϊ����  ���ĸ�����ԭͼ��λ�ô�С
		}
	}
	//delimage(img);  img ������Ҫdelimage
	key_msg  k = { 0 };
	for (; k.key != key_esc;)
	{
		char str[32];
		//if(kbmsg())//�ж��Ƿ񰴼�
		k = getkey();
		sprintf(str, "key=%c %3d  %2x msg=%d  flag=%d", k.key, k.key, k.key, k.msg, k.flags);
		cleardevice();
		outtextxy(0, 0, str);
	}
	for (; is_run(); delay_fps(50))  //delay_fps(n) ���ӳ�1/n��
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
		//��ȡ�����Ϣ�����������ȴ����ȴ�������ϢΪֹ
		//���Ƶأ��к�kbhit��������ĺ���MouseHit�����ڼ����û�������Ϣ
		while (mousemsg())
		{
			msg = getmouse();
		}

		//��ʽ�����Ϊ�ַ��������ں������
		//msg��flag������ο��ĵ�����mouse_msg_e, mouse_flag_e������

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
	//���öԻ�����
	inputbox_getline("������", "�㰮����ʲô������ʲô���س�ȷ�ϣ�", str, 100);

	//��ʾ���������
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
#define File "E:\\̰����.txt"

#define U 1//��ʾ�궨��һ������u������ʼ��ֵΪ1.������ʾup����˼
#define D 2
#define L 3 
#define R 4       //�ߵ�״̬��U���� ��D���£�L:�� R����

typedef struct SNAKE //�����һ���ڵ�
{
	int x;
	int y;
	struct SNAKE *next;
}snake;

//ȫ�ֱ���//
int score = 0, add = 10;//�ܵ÷���ÿ�γ�ʳ��÷֡�
int status, sleeptime = 300;//ÿ�����е�ʱ����
snake *head, *food;//��ͷָ�룬ʳ��ָ��
snake *q;//�����ߵ�ʱ���õ���ָ��
int endgamestatus = 0; //��Ϸ�����������1��ײ��ǽ��2��ҧ���Լ���3�������˳���Ϸ��

					   //����ȫ������//
void Pos();//���ù��λ�ú���
void creatMap();//������ͼ����
void initsnake();//��ʼ��������
int biteself();//�ж��Ƿ�ҧ���Լ�����
void createfood();//����ʳ��������ֺ���
void cantcrosswall();//���ܴ�ǽ����
void snakemove();//���ƶ��ĺ���
void pause();//��ͣ����
void gamecircle();//������Ϸ����
void welcometogame();//������Ϸ���溯��
void endgame();//������Ϸ����
void gamestart();//��Ϸ��ʼ������
void loadRecord();
void saveProgress();

void Pos(int x, int y)//���ù��λ��
{
	COORD pos;
	HANDLE hOutput;
	pos.X = x;
	pos.Y = y;
	hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOutput, pos);//ʹ��굽(x,y)λ����
}

void creatMap()//������ͼ
{
	int i;
	for (i = 0; i<58; i += 2)//��ӡ���±߿�
	{
		Pos(i, 0);
		printf("��");
		Pos(i, 26);
		printf("��");
	}
	for (i = 8; i<30; i += 2)//��ӡ��ͼ�к���
	{
		Pos(i, 4);
		printf("��");
	}
	for (i = 30; i<54; i += 2)//��ӡ��ͼ�к���
	{
		Pos(i, 22);
		printf("��");
	}
	for (i = 4; i<22; i++)//��ӡ��ͼ������
	{
		Pos(30, i);
		printf("��");
	}
	for (i = 1; i<26; i++)//��ӡ���ұ߿�
	{
		Pos(0, i);
		printf("��");
		Pos(56, i);
		printf("��");
	}
}

void initsnake()//��ʼ������
{
	snake *tail;
	int i;
	tail = (snake*)malloc(sizeof(snake));//����β��ʼ��ͷ�巨����x,y�趨��ʼ��λ��//
	tail->x = 10;
	tail->y = 15;
	tail->next = NULL;
	for (i = 1; i <= 2; i++)//��ӡ�����趨����
	{
		head = (snake*)malloc(sizeof(snake));
		head->next = tail;
		head->x = 10;
		head->y = 15 + i;
		tail = head;
	}
	while (tail != NULL)//��ͷ��β���������
	{
		Pos(tail->x, tail->y);
		printf("��");
		tail = tail->next;
	}
	status = R;
}

int biteself()//�ж��Ƿ�ҧ�����Լ�
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

void coincidence()//��֤��ͷ��ʳ��һ�º���
{
	srand((unsigned)time(NULL));
	do
	{
		food->x = rand() % 52 + 2;
	} while ((food->x % 2) != 0);    //��֤��Ϊż����ʹ��ʳ��������ͷ����
	food->y = rand() % 25 + 1;
}

void createfood()//�������ʳ��
{
	coincidence();
	q = head;
	while (q->next != NULL)
	{
		while (q->x == food->x && q->y == food->y) //�ж������Ƿ���ʳ���غ�
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
	printf("��");
}

void cantcrosswall()//���ܴ�ǽ
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

void snakemove()//��ǰ��,��U,��D,��L,��R
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
	if (nexthead->x == food->x && nexthead->y == food->y)//�����һ����ʳ��//
	{
		nexthead->next = head;
		head = nexthead;
		q = head;
		while (q != NULL)
		{
			Pos(q->x, q->y);
			printf("��");
			q = q->next;
		}
		score = score + add;
		createfood();
	}
	else                                               //���û��ʳ��//
	{
		nexthead->next = head;
		head = nexthead;
		q = head;
		while (q->next->next != NULL)
		{
			Pos(q->x, q->y);
			printf("��");
			q = q->next;
		}
		Pos(q->next->x, q->next->y);
		printf("  ");
		free(q->next);
		q->next = NULL;
	}
	if (biteself() == 1)       //�ж��Ƿ��ҧ���Լ�
	{
		endgamestatus = 2;
		endgame();
	}
}

void pause()//��ͣ
{
	while (1)
	{
		Sleep(300);
		if (GetAsyncKeyState(VK_SPACE))
			break;
	}
}

void gamecircle()//������Ϸ        
{

	Pos(64, 15);
	printf("���ܴ�ǽ������ҧ���Լ�\n");
	Pos(64, 16);
	printf("�á�.��.��.���ֱ�����ߵ��ƶ�.");
	Pos(64, 17);
	printf("F1 Ϊ���٣�F2 Ϊ����\n");
	Pos(64, 18);
	printf("ESC ���˳���Ϸ.space����ͣ��Ϸ.");
	Pos(64, 20);
	while (1)
	{
		Pos(64, 10);
		printf("�÷֣�%d  ", score);
		Pos(64, 11);
		printf("ÿ��ʳ��÷֣�%d��", add);
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
					add = 2;//��ֹ����1֮���ټӻ����д�
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
					add = 1;  //��֤��ͷ�Ϊ1
				}
			}
		}
		Sleep(sleeptime);
		snakemove();
	}
}

void welcometogame()//��ʼ����
{
	system("color 0C");
	Pos(40, 12);
	printf("     =====��ӭʹ��̰������Ϸ=====\n\n");
	Pos(40, 25);
	system("pause");
	system("cls");
	Pos(25, 12);
	printf("�á�.��.��.���ֱ�����ߵ��ƶ��� F1 Ϊ���٣�F2 Ϊ����\n");
	Pos(25, 15);
	printf("���ٽ��ܵõ����ߵķ�����\n");
	system("pause");
	system("cls");
}

void endgame()//������Ϸ
{

	system("cls");
	Pos(24, 12);
	if (endgamestatus == 1)
	{
		printf("�Բ�����ײ��ǽ�ˡ���Ϸ����.");
	}
	else if (endgamestatus == 2)
	{
		printf("�Բ�����ҧ���Լ��ˡ���Ϸ����.");
	}
	else if (endgamestatus == 3)
	{
		printf("���Ѿ���������Ϸ��");
		saveProgress();
	}
	Pos(24, 13);
	printf("���ĵ÷���%d", score);
	Pos(24, 15);
	printf("�밴ESC���˳���Ϸ\n");
	while (getch() != 27);
	exit(0);
}

void resume()
{
	Pos(food->x, food->y);
	printf("��");
	q = head;
	while (q != NULL)
	{
		Pos(q->x, q->y);
		printf("��");
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
		printf("�洢��¼ʧ�ܣ�");
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
		printf("��������");
		Pos(45, 11);
		printf("1 ��ʼ��Ϸ");
		Pos(45, 13);
		printf("2 ������Ϸ");
		Pos(45, 15);
		printf("0 �˳���Ϸ");
		Pos(43, 17);
		printf("��������");
		Pos(43, 19);
		printf("��ѡ�������");
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
	system("mode con cols=100 lines=30");//����ϵͳConsole����̨��ʾ�Ŀ�Ⱥ͸߶ȣ��߶�Ϊ100���ַ������Ϊ30���ַ�
	welcometogame();
	PlaySound("D:\c++\ͼ�ο���ϰ\ͼ�ο���ϰ\Debug\\Go Time.wav", NULL, SND_FILENAME | SND_ASYNC);

	//������  
	system("pause");
	food = (snake*)malloc(sizeof(snake));
	displayMenu();
	creatMap();
	gamecircle();
	endgame();
	return 0;
}