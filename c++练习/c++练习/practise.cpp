/*#include<stdlib.h>
#include<iostream>
namespace a {
int getMaxorMin(int *num, int n, bool ismax)
{
int temp = num[0];
if (ismax)
{
for (int i = 0; i < n; i++)
if (num[i] > temp)
temp = num[i];
}
else
for (int i = 0; i < n; i++)
if (num[i] < temp)
temp = num[i];
return temp;
}
}
void main()
{
int num[10], n,temp;
bool ismax = false;
std::cin >> n;
for (int i = 0; i < n; i++)
std::cin >> num[i];
std::cin >> ismax;
std::cout<<a::getMaxorMin(num, n, ismax);
system("pause");
}*/
/*#include<stdio.h>//插入排序     有错误！！！！
#define N 100
int sertSort(int a[], int n)
{
	int i, j, temp, min, max, mid;
	for (i = 0; i < n; i++)
	{
		temp = a[i];
		max = i-1; min = 0; mid = (max + min) / 2;
		while (max >= min)
		{
			mid = (max + min) / 2;
			if (temp >= a[mid])
				min = min + 1;
			else
				max = mid - 1;
		}
		if (temp > a[mid])
		{
			for (j = i - 1; j > mid; j--)
				a[i] = a[j];
			a[mid + 1] = temp;
		}
		else
		{
			for (j = i - 1; j >= mid; j--)
				a[i] = a[j];
			a[mid] = temp;
		}
	}
	return 0;
}
#include<stdio.h>
#define N 100
int main()
{
	int a[N], j, i, count = 0, n, temp;
	scanf("%d", &n);
	for (i = 0; i<n; i++)
	{
		scanf("%d", &temp);
		for (j = 0; j<count; j++)
		{
			if (temp == a[j])
				break;
		}
		if (j == count)
		{
			a[count] = temp;
			count++;
		}
	}
	for (i = 1; i<count; i++)
		for (j = 0; j<count - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	printf("%d\n", count);
	for (i = 0; i<count; i++)
		printf("%d ", a[i]);
}
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
void main()
{
	string name;
	cout << "please input your name:" << endl;
	getline(cin, name);
	if (name.empty())
	{
		cout << "input is NULL" << endl;
	}
	else
	{
		if (name == "ioomc")
			cout << "you are a administrator!" << endl;
		cout << "you name length is:" << name.size()<< endl;
		cout << "hello " + name << endl;
		cout << "your name first is:"<< name[0] << endl;
	}
	system("pause");
}*/
/*#include<iostream>
using namespace std;
如上一个程序，如果你输入的不合法，那就将陷入死循环。解决的办法有个一，把cin>>i;
语句移到判断循环的语句中，那么，你输入的如果是不合法的变量，他将跳出循环。
cin是用空格来分隔输入的。请看看如下的例子：

int main()
{
	int i=0;
	while (i != -1)
	{
		cout << "i=";
		cin >> i;
		cout << endl;
	}
	return 0;
}*/
/*#include<iostream>
#include<string>
using namespace std;
class Student
{
public:
	void setname(string _name)
	{
		name = _name;
	}
	string getname()
	{
		return name;
	}
	void setgender(string _gender)
	{
		gender = _gender;
	}
	string geygender()
	{
		return gender;
	}
	void initscore()
	{
		score = 0;
	}
	int getscore()
	{
		return score;
	}
	void study(int _score)
	{
		score += _score;
	}
private:
	string name;
	string gender;
	int score;
};
void main()
{
	Student stu;
	stu.setname("黄涛");
	stu.setgender("男");
	stu.initscore();
	stu.study(9);
	cout << stu.getname() << " " << stu.geygender() << " " << stu.getscore() << endl;
}
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

#define I_live 1
int while_number = 0;
COORD coord = { 30,7 };
HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
void say()
{

	srand(time(NULL));
	int color;
	color = rand()%4;
	switch (color)
	{
	case 0: {
		SetConsoleTextAttribute(hout, FOREGROUND_GREEN);
		break;
	}
	case 1: {
		SetConsoleTextAttribute(hout, FOREGROUND_RED);
		break;
	}
	case 2: {
		SetConsoleTextAttribute(hout, FOREGROUND_BLUE |
			BACKGROUND_INTENSITY);
		break;
	}
	case 3: {
		SetConsoleTextAttribute(hout, BACKGROUND_INTENSITY |
			BACKGROUND_BLUE |
			FOREGROUND_RED |
			FOREGROUND_GREEN);
		break;
	}
	case 4:		SetConsoleTextAttribute(hout, FOREGROUND_GREEN |
		FOREGROUND_RED |
		BACKGROUND_BLUE |
		BACKGROUND_INTENSITY);
	}
	printf("\t爸爸，节日快乐！！！\n");
	while_number++;
}

int main()
{
	do {
		if (while_number % 6 == 0)
		{
			coord.Y = 7;
			_sleep(1000);
			system("cls");
			SetConsoleCursorPosition(hout, coord);
		}
		say();
		coord.Y += 1;
		SetConsoleCursorPosition(hout, coord);

		if (while_number % 12 == 0)
		{
			coord.Y = 15;
			SetConsoleCursorPosition(hout, coord);
			printf("生存需要力量，生活需要勇气！！！！");
		}
	} while (I_live);
	return 0;
}

int main()
{
	Teatcher T;
	T.setName("孔子");
	T.setAge(30);
	T.setGender("男");
	cout << T.getAge() << "  " << T.getGender() << "  " << T.getName() << endl;
	T.Teatch();
	system("pause");
}
#include"Teatcher.h"
#include<stdlib.h>
int main()
{
	Teatcher T("你爹",9);
	cout << T.getAge()<< "  " << T.getName() << endl;
	T.Teatch();
	system("pause");
	return 0;
}*/
//#include"migrant.h"
//int main()
//{
//	migrant *a = new migrant();
//	delete a;
//	//a = null;
//	system("pause");
//	return 0;
//}
#include"Migrant.h"
void main()
{
	migrant *a=new migrant("...famer","...worker");
	a->print();
	delete a;
	a = NULL;
	system("pause");
}