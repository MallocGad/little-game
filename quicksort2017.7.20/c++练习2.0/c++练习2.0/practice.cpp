//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	A();
//	virtual ~A();
//	int v;
//};
//class B :public A
//{
//public:
//	B();
//	virtual ~B();
//	int m_inum;
//};
//A::A()
//{
//
//}
//B::B()
//{
//
//}
//A::~A()
//{
//}
//B::~B()
//{
//
//}
//int main()
//{
//	A a;
//	B b;
//	cout << sizeof(a) << endl;
//	cout << sizeof(b) << endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//class Person
//{
//public:
//	Person(string name)
//	{
//		m_strname = name;
//		cout << "Person" << endl;
//	}
//	virtual ~Person()
//	{
//		cout << "~Person" << endl;
//	}
//	virtual void Work() = 0;
//private:
//	string m_strname;
//};
//
//class Worker :public Person
//{
//public:
//	Worker(string name, int age):Person(name)
//	{
//		m_iage = age;
//	}
//	~Worker()
//	{
//
//	}
//	void virtual Work()
//	{
//		cout << "hi boy gpto work" << endl;
//	}
//private:
//	int m_iage;
//};
//void main()
//{
//	Worker a("小号",9);
//	a.Work();
//	system("pause");
//}
//#include<iostream>
//#include<string>
//using namespace std;
//class Flyable
//{
//public:
//	virtual void takeoff() = 0;
//	virtual void land() = 0;
//};
//class Plane:public Flyable
//{
//public:
//	Plane() { }
//	virtual void takeoff() { cout << "plane-you can fly!" << endl; }
//	virtual void land() { cout << "plane-sure youcan land!" << endl; }
//	void carry() { cout << "plane-carry" << endl; }
//};
//class Bird :public Flyable
//{
//public:
//	Bird(){ }
//	virtual void takeoff() { cout << "Bird-you can fly!" << endl; }
//	virtual void land() { cout << "Bird-sure youcan land!" << endl; }
//	void froging() { cout << "find food" << endl; }
//};
//void done(Flyable *f1)
//{
//	f1->takeoff();
//	if (typeid(*f1) == typeid(Bird))
//	{
//		Bird *b = dynamic_cast<Bird *>(f1);
//		b->froging();
//	}
//	if (typeid(f1) == typeid(Plane *))
//	{
//		Plane *b = dynamic_cast<Plane *>(f1);
//		b->carry();
//	}
//	f1->land();
//}
//void main()
//{
//    Flyable *b = new Plane;
//    done(b);
//	cout << typeid(Plane *).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << (bool)(typeid(Plane *).name() == typeid(b).name()) << endl;
//	system("pause");
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	friend int B::c(A &a);
//};
//class B
//{
//public:
//	int c(A &a)
//	{
//		cout << "厉害了~" << endl;
//	}
//};
//void main()
//{
//	A a;
//	B b;
//	b.c(a);
//}

//#include<iostream>
//using namespace std;
//class Coordinate
//{
//public:
//	Coordinate(int a, int b)
//	{
//		x = a, y = b;
//	}
//	friend Coordinate* operator - (Coordinate &c)
//	{
//		c.x = -c.x;
//		c.y = -c.y;
//		return &c;
//	}
//	void print()
//	{
//		cout << x << " " <<y<< endl;
//	}
//private:
//	int x, y;
//};
//void main()
//{
//	Coordinate a(1, 3);
//	a.print();
//	-a;
//	a.print();
//	system("pause");
//}
//#include<iostream>
//using namespace std;
//class Coordinate
//{
//	friend ostream& operator <<(ostream &out,Coordinate c)
//	{
//		out << c.x << "," << c.y << endl;
//		return out;
//	}
//public:
//private:
//	int x=1,y=2;
//};
//void main()
//{
//	Coordinate a;
//	cout << a;
//	system("pause");
//}
//#include<iostream>
//using namespace std;
//class coordinate
//{
//public:
//    int operator ()(int x)
//	{
//		if (x == 1)
//			return this->x;
//		else
//			return y;
//	}
//	int x = 1;
//	int y = 2;
//};
//void main()
//{
//	coordinate a;
//	cout << a(1) << endl;
//	system("pause");
//}
//#include"2.h"             //extern是声明
//void main()
//{
//	put();
//	cout << a << endl;
//}
//#include<iostream>
//#include<list>
//#include<stdlib.h>
//#include<vector>
//#include<map>
//using namespace std;
//int main()
//{
//	//vector<char> vec;
//	//vec.push_back('q');
//	//vec.push_back('4');
//	//cout << vec[1] << endl;
//	//vector<char>::iterator it = vec.begin();//迭代器，it是一个地址
//	//
//	//
//	//cout << vec.front() << endl;
//	list<int> list1;
//	list1.push_back(1);
//	list1.push_back(2);
//	list1.push_front(0);
//	list<int>::iterator it0 = list1.begin();
//	while (it0 != list1.end())
//	{
//	
//		cout <<*it0 << endl;
//		it0++;
//	}
//	cout << list1.back() << endl;
//	//map<int, string> a;
//	//pair<int, string> p1(1, "黄涛");
//	//pair<int, string>p2(2, "谁呢");
//	//a.insert(p1);
//	//a.insert(p2);
//	system("pause");
//	return 0;
//}
//#include <vector>
//#include <map>
//#include <string>
//#include <iostream>
//using namespace std;
//int main(void)
//{
//	// 使用vector存储数字：3、4、8、4
//	vector<int> vec;
//	vec = { 3,4,8 };
//	vec.push_back(4);
//	//循环打印数字
//	for (int x : vec)
//		cout << x;
//	// 使用map来存储字符串键值对
//	map<string, string> m;
//	pair<string, string> p1("s","上海");
//	pair<string, string> p2("b","北京");
//	m.insert(p1);
//	m.insert(p2);
//	// 打印map中数据
//	map<string, string>::iterator it = m.begin();
//	for (; it != m.end(); it++)
//	{
//		cout << it->first << endl;
//		cout << it->second << endl;
//	}
//	return 0;
//}
//#include"2.h"
//void main()
//{
//	A<char, 5, 3> a;
//	a.print();
//	system("pause");
//}
#include<iostream>    //垃圾题目毁我青春
using namespace std;
int main()
{
	int a[100],m,i,j,divisor;
	scanf("%d", &m);
	for (i=0;i<m;i++)
		scanf("%d", &a[i]);
	for (i = 0; i < m; i++)
	{
		j = 1;
		divisor = 10;
		while (a[i] / divisor != 0)
			divisor *= 10;
		cout << a[i] % (divisor / 10) << endl;
	}
	system("pause");
	return 0;
}