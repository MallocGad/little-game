#include"Migrant.h"
#include<iostream>
using namespace std;
migrant::migrant(string name1,string name2):Famer(name1),Worker(name2)
{
	cout << "migrant()" << endl;
}
migrant::~migrant()
{
	cout << "~migrant()" << endl;
}
void migrant::print()
{
	cout << migrant::color << endl;
}