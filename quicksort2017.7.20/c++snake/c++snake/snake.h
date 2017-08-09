#pragma once
#include"coor.h"
class Snake :public Coor
{
public:
	Snake();
	void snakecreat();
	int textself();
	void snakemove();
	void getdir();
	int snakemeetfood(int x,int y);
	Snakecoor *head=NULL, *rear=NULL, *p=NULL;
private:
	enum Dir
	{
		UP,
		DOWN,
		LEFT,
		RIGHT
	}dir; 
};
