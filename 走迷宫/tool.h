/************************************
未main提供函数接口以及函数声明
Person类以及Manp类
*************************************/
#pragma once
#include<stdio.h>
#include<iostream>
#include<Windows.h>
using namespace std;
const int _exity = 0;
const int _exitx = 4;
struct Pos
	{
		int x;
		int y;
	};
class Person
{
public:
	struct Pos _rPos, p_rPos;
	char P = 'R';
	Person();
	void direction(char a[][11]);
	void move(char a[][11]);
	int Juge();
	int getstep()
	{
		return step;
	}
private:
	enum derect
	{
		UP,
		DOWN,
		LEFT,
		RIGHT,
	} _edirection;
	int step=0;
};
class Manp
{
public:
	Manp(char a[][11], int x, int y);
	void Drowp(struct Pos p, struct Pos p2,char e);
	void Gotoxy(int x, int y);
};