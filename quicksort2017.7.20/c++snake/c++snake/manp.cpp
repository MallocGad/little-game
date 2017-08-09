#include"manp.h"
void Manp::showmanp()
{
	int i;
	gotoxy(0, 0);
	for (i = 0; i <= with+1; i++)
		cout << "■";
	gotoxy(0, 0);
	for (i = 0; i <= high+1; i++)
		cout << "■"<<endl;
	for (i = 0; i <= high; i++)
	{
		gotoxy((with+1)*2,i);
		cout << "■";
	}
	gotoxy(0, high+1);
	for (i = 0; i <= with+1; i++)
		cout << "■"; 
}
int Manp::juge(Snakecoor *head)
{
	if (with + 1 == head->x || high + 1 == head->y
		|| 0 == head->x || 0 == head->y)
		return 1;
	else
		return 0;
}
int Manp::exitgame()
{
	gotoxy((with + 1) * 2, high / 2);
	cout << "请问是否退出游戏?" << endl;
	gotoxy((with + 1) * 2, (high / 2)+1);
	cout << "请选择：1继续游戏，  2.退出游戏";
	int chose;
	while (1)
	{
		chose = getch();
		if ('1' == chose)
			return 0;
		else if ('2' == chose)
			return 1;
		else
			cout << "输入有误 重新输入:";
	}
}