#include"famer.h"
#include<iostream>
using namespace std;
Famer::Famer(string name):Person(name)
{
	Famer::color = name;
	cout << "famer()" << endl;
}
Famer::~Famer()
{
	cout << "~Famer()" << endl;
}
void Famer::Move()
{
	cout << "Famer->Move()" << endl;
}