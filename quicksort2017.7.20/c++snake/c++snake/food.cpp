#include"food.h"
Food::Food()
{
	x = 5;
	y = 6;
}
void Food::printfood()
{
	gotoxy(x*2, y);
	cout << "★";
}
void Food::creatfood()
{
	x = rand() % high + 1;
	y = rand() % with + 1;
}
void Food::textfood(Snakecoor *head)
{
	int T = 0;
	Snakecoor *p=head;
	while (T < Max)
	{
		if (x == head->x&&y == head->y)
			T++;
		else
			break;
	}
	if (T == Max)
		setfood(head);
}
void Food::setfood(Snakecoor *head)
{
	if (1 == head->x)
	{
		x = high;
		y = head->y;
	}
	else if (high == head->y)
	{
		x = 1;
		y = head->y;
	}
	else
		x = head->x+1, y = head->y;
}