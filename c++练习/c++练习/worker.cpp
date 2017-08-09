#include"Worker.h"
#include<iostream>
using namespace std;
Worker::Worker(string name):Person(name)
{
	Worker::color = name;
	cout << "Worker::Worker()" << endl;
}
Worker::~Worker()
{
	cout << "~Worker()" << endl;
}
void Worker::Move()
{
	cout << "Worker->Move()" << endl;
}