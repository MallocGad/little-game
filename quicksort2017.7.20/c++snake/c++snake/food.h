#pragma once
#include"coor.h"
class Food :public Coor
{
public:
	Food();
	void printfood();
	void creatfood();
	void textfood(Snakecoor *head);
	
	int getfoodcoorx()
	{
		return x;
	}
	int getfoodcoory()
	{
		return y;
	}
protected:
	void setfood(Snakecoor *head);
private:
	int x;
	int y;
	const int Max = 5;
};