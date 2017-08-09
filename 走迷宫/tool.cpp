/*******************************************
所需函数的实现
********************************************/
#include"tool.h"
Person::Person()
{
	_edirection = UP;
	_rPos = p_rPos = { 7,2 };
}
void Person::direction(char a[][11])
{
	switch (_edirection)
	{
	case UP:
		if (a[_rPos.x][_rPos.y + 1] == '1')
		{
			if (a[_rPos.x - 1][_rPos.y] == '1')
				_edirection = LEFT;
		}
		else
			_edirection = RIGHT;
		break;
	case LEFT:
		if (a[_rPos.x - 1][_rPos.y] == '1') {
			if (a[_rPos.x][_rPos.y - 1] == '1')
				_edirection = DOWN;
		}
		else
			_edirection = UP;
		break;
	case RIGHT:
		if (a[_rPos.x + 1][_rPos.y] == '1')
		{
			if (a[_rPos.x][_rPos.y + 1] == '1')
				_edirection = UP;
		}
		else
			_edirection = DOWN;
		break;
	case DOWN:
		if (a[_rPos.x][_rPos.y - 1] == '1')
		{
			if (a[_rPos.x + 1][_rPos.y] == '1')
				_edirection = RIGHT;
		}
		else
			_edirection = LEFT;
		break;
	default:cout << "erro" << endl; exit(0); break;
}
}
void Person::move(char a[][11])
{
	p_rPos = _rPos;
	step++;
	switch (_edirection)
	{
	case UP:
		_rPos.x--;
		if (a[_rPos.x][_rPos.y] == '1')
			_rPos.x++;
		break;
	case LEFT:_rPos.y--;
		if (a[_rPos.x][_rPos.y] == '1')
			_rPos.y++;
		break;
	case RIGHT:_rPos.y++;
		if (a[_rPos.x][_rPos.y] == '1')
			_rPos.y--;
		break;
	case DOWN:_rPos.x++; 
		if (a[_rPos.x][_rPos.y] == '1')
			_rPos.x--;
		break;
	default:
		cout << "erro!" << endl;  exit(0);
		break;
	}
}
int Person::Juge()
{
	if (_rPos.x == _exity && _rPos.y == _exitx)
	{
		return 1;
	}
	return 0;
}
Manp::Manp(char a[][11], int x, int y)
{
	int i , j;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
			cout << a[i][j];
		cout << endl;
	}
}
void Manp::Drowp(struct Pos p, struct Pos p2,char e)
{
	Gotoxy(p2.y, p2.x);
	cout << '0';
	Gotoxy(p.y, p.x);
	cout << e;
}
void Manp::Gotoxy(int x, int y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	HANDLE hout;
	hout = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hout, Pos);
}