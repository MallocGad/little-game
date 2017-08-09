#pragma once
#include"person.h"
#include<string>
using namespace std;
class Worker:virtual public Person
{
public:
	void Move();
	Worker(string name);
	~Worker();
};