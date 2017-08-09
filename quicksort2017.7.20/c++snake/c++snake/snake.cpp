#include"snake.h"
Snake::Snake()
{
	head = new Snakecoor;
	head->x = 6, head->y = 6;
	head->next = NULL;
	rear = head;
	gotoxy(6, 6);
	cout << "¡ñ";
	dir = RIGHT;
}
int Snake::textself()
{
	p = head->next;
	while (p != NULL)
	{
		if (p->x == head->x&&p->y == head->y)
			return 1;
		p = p->next;
	}
	return 0;
}
void Snake::snakecreat()
{
	p = new Snakecoor;
	p->x = rear->x;
	p->y = rear->y;
	p->next = NULL;
	rear->next = p;
	p->pre = rear;
	rear = p;
}
void Snake::snakemove()
{
	p = rear;
	gotoxy((rear->x)*2, rear->y);
	cout << "  ";
	while (p != head)
	{
		p->x = p->pre->x;
		p->y = p->pre->y;
		p = p->pre;
	}
	switch (dir)
	{
	case UP:
		head->y--; break;
	case DOWN:
		head->y++; break;
	case LEFT:
		head->x--; break;
	case RIGHT:
		head->x++; break;
	default:exit(0); break;
	}
	/*gotoxy((rear->x) * 2, rear->y);
	cout << "¡ñ";*/
	gotoxy((head->x)*2, head->y);
	cout << "¡ñ";
}
void Snake::getdir()
{
	char ch='x';
	if (kbhit())
		ch = getch();
	switch (ch)
	{
	case 'W':
	case 'w':if(dir!=DOWN) dir = UP; break;
	case'A':
	case'a':if (dir != RIGHT) dir = LEFT; break;
	case's':
	case'S':if (dir != UP) dir = DOWN; break;
	case'D':
	case'd':if (dir != LEFT) dir = RIGHT; break;
	default:break;
	}
}
int Snake::snakemeetfood(int x,int y)
{
	if (head->x == x&&head->y == y)
		return 1;
	return 0;
}