#include<iostream>
using namespace std;
class A
{
public:
	A();
	~A();
};
class B :public A
{
public:
	B();
	~B();
	int m_inum;
};
A::A()
{

}
B::B()
{

}
A::~A()
{
}
B::~B()
{

}
int main()
{
	A a;
	B b;
	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;
    return 0;
}

