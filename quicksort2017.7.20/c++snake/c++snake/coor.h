#pragma once
#include<ctime>
#include<iostream>
#include<Windows.h>
#include<conio.h>
#define WITH 20
#define HIGH 20
struct Snakecoor
{
	int x;
	int y;
	Snakecoor *next;
	Snakecoor *pre;
};
using namespace std;
class Coor
{
protected:
	void gotoxy(int x, int y);
	int high = HIGH;
	int with = WITH;
};