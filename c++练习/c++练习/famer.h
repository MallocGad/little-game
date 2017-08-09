#pragma once
#include"person.h"
class Famer:virtual public Person
{
public:
	Famer(string name);
	~Famer();
	void Move();
};