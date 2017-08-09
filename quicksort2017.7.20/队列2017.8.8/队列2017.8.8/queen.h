#pragma once
#include<iostream>
using namespace std;
class Queen
{
public:
	Queen();
	virtual ~Queen();
	void Inqueen(int a);
	void Outqueen(int &a);
	int Queenlen();
	bool Emptyqueen();
	bool Clearqueen();
	bool Queentraverse();
	bool Queenfull();
private:
	int lenth;
	int elements;
	int *ptrqueen;
	int *head;
};
Queen::Queen()
{
	lenth = 10;
	head=ptrqueen = new int[10];
	elements = 0;
}
Queen::~Queen()
{
	delete []ptrqueen;
	ptrqueen = NULL;
}
bool Queen::Clearqueen()
{
	elements = 0;
	ptrqueen = head;
	return true;
}
bool Queen::Emptyqueen()
{
	if (0 == elements)
		return true;
	return false;
}
void Queen::Inqueen(int a)
{
	if (head + 9 < ptrqueen+elements)
	    *(head+((ptrqueen+elements-1)-(head+9)))=a;
	else
	*(ptrqueen + (elements++)) = a;
}
void Queen::Outqueen(int &a)
{
	a = *ptrqueen;
	if (ptrqueen == head + 9)
		ptrqueen = head;
	else
		ptrqueen++;
	elements--;
}
bool Queen::Queentraverse()
{
	int i = 0;
	while (i < elements)
	{
		if (head + 9 < ptrqueen + i)
			cout << *(head + ((ptrqueen + i - 1) - (head + 9))) << "   ";
		else
			cout << *(ptrqueen + i) << "  ";
		i++;
	}
	return true;
}
bool Queen::Queenfull()
{
	if (lenth == elements)
		return true;
	return false;
}
int Queen::Queenlen()
{
	return lenth;
}