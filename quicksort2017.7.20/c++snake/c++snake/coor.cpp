#include"coor.h"
void Coor::gotoxy(int x, int y)
{
	COORD pos;
	HANDLE hout;
	pos.X = x;
	pos.Y = y;
	hout=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hout, pos);
}