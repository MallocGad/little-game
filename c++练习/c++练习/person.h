#pragma once
#ifndef PERSON
#define PERSON
#include<string>
using namespace std;
class Person
{
public:Person(string name="blue");
	   void Move();
	   virtual ~Person();
protected:
string color;
};
#endif 