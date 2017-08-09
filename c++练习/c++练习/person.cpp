#include<iostream>
#include"person.h"
Person::Person(string color)
{
	this->color = color;
	cout << "Person::Person(string color)" << endl;
}
Person::~Person()
{
	cout << "~Person()" << endl;
}
void Person::Move()
{
	cout << "Person->Move()" << endl;
}