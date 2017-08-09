#pragma once
#include<iostream>
using namespace std;
//extern int a;
//void put();
template <typename T,int size,int e>
class A
{
public:
	void print();
private:
	T x;
};
template <typename T, int size, int e>
void A< T, size , e >::print()
{
	T a[size];
	for (int i = 0; i < size; i++)
	{
		cin >> a[i];
	}
	cout << "e:" << e << endl;
	for (T x : a)
	{
		cout << x << endl;
	}
}
