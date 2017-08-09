#pragma once
#include"famer.h"
#include"Worker.h"
class migrant :public Famer, public Worker
{
public:
	migrant(string name,string name1);
	~migrant();
	void print();
};