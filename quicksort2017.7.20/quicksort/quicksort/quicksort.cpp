/**************************************
<项目名称>    quicksort.cpp
<项目介绍>  无言风丶  实现快速排序
《项目周期》   1天
创建日期：2017.7.20  
最后修改：2017.7.20
***************************************/
//#include<iostream>
//using namespace std;
//void sort(int a[], int n);
//int main()
//{
//	int a[10] = { 1,5,4,1,58,23,1,2,2,3 };
//	sort(a, 10);
//	for(int i=0;i<10;i++)
//	cout << a[i] << endl;
//	system("pause");
//}
//void sort(int a[],int n)
//{
//	if (n <= 1) return;
//	int i=1,temp,sign=0,j;
//	for (; i < n; i++)
//	{
//		if (a[i] <= a[sign])
//		{
//			temp = a[i];
//			for (j = i; j > sign; j--)
//				a[j] = a[j - 1];
//			a[j] = temp;
//			sign++;
//		}
//	}
//	sort(a, sign);
//	sort(&a[sign + 1], n - sign-1);
//}
/*******************************************
《项目名称》  插入排序     描述：实现快速排序
《项目文件》  quicksort.cpp
《创建者》   无风丶浪
《版本编号》   1.0
《创建日期》   2017.7.26
《最后修改》   2017.7.26/无风丶浪
*********************************************/
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[100000] , n, i=0, j,flag,k;
//	cin >> n;
//	for (; i < n; i++)
//		cin >> a[i];
//	for (i = 1; i < n; i++)
//	{
//		flag = a[i];
//		j = i;
//		while (flag < a[j-1] && j > 0)
//			j--;
//		if (j != i)
//		{
//			for (k = i; k > j; k--)
//				a[k] = a[k - 1];
//			a[j] = flag;
//		}
//	}
//	for (i = 0; i < n; i++)
//		cout << a[i]<<" ";
//	system("pause");
//	return 0;
//}
/*********************************************
《项目名称》  快速排序  
描述：之前打了一个快速排序，由于实现时的失误，元素的移动过于频繁，
导致快排所耗费时间过多，在借鉴网络上的算法，自己打了一个。
《文件名称》quiksoret.cpp
《创建者》无风丶
《版本编号》  1.2
《创建日期》  2017.7.27
《最后修改》   2017.7.27
**********************************************/
//#include<iostream>
//using namespace std;
//void quiksort(int, int);
//int a[100000];
//int main()
//{
//	int n,i=0;
//	cin >> n;
//	for (; i < n; i++)
//		cin >> a[i];
//	quiksort(0, n - 1);
//	for (i = 0; i < n; i++)
//		cout << a[i] << " ";
//	cout << endl;
//	system("pause");
//	return 0;
//}
//void quiksort(int left, int right)
//{
//	int temp=a[left],temp2, i, j;
//	if (left>=right)
//		return;
//	i = left;
//	j = right;
//	while (i < j)
//	{
//		while (a[j] >= temp&&i<j)
//			j--;
//		while (a[i] <= temp&&i<j)
//			i++;
//		temp2 = a[j];
//		a[j] = a[i];
//		a[i] = temp2;
//	}
//	temp2 = a[j];
//	a[j] = a[left];
//	a[left] = temp2;
//	quiksort(left, i - 1);
//	quiksort(i + 1, right);
//}
//#include<iostream>   //判断素数 感觉特别高效的
//#include<cmath>
//#define N 100
//using namespace std;
//void main()
//{
//	int a[N+1],i=1,j;
//	for (;i<N+1;i++)
//		a[i]=i;
//	for (i = 2; i <= sqrt(N); i++)
//	{
//		for(j=i*i;j<N+1;j++)
//		if (a[j] != 0&&a[i]!=0)
//		{
//			if (a[j] % a[i] == 0)
//				a[j] = 0;
//		}
//	}
//	for (i=1;i<N+1;i++)
//	{
//		if(a[i]!=0)
//		cout << a[i] << " ";
//	}
//	system("pause");
//}
#include<iostream>
using namespace std;
char m[8][8];
int count1 = 0;
int search(int i,int j,static int *count2)
{ 
	if(i<0||i>7||j<0||j>7)
	return *count2;
	if ('*' == m[i][j])
	{
		(*count2)++;
		m[i][j] = '0';
		search(i - 1, j, count2);
		search(i + 1, j, count2);
		search(i , j+1, count2);
		search(i , j-1, count2);
	}
	return *count2;
}
void main()
{
	int a, b,i,j,temp,max=0;
	cin >> a >> b;
	for (i = 0; i < a; i++)
		for (j = 0; j < b; j++)
			cin >> m[i][j];
	for (i = 0; i < a; i++)
		for (j = 0; j < b; j++)
		{
			temp=search(i, j,&count1);
			if (temp > max)
				max=temp;
			count1 = 0;
		}
	cout << max << endl;
	system("pause");
}
