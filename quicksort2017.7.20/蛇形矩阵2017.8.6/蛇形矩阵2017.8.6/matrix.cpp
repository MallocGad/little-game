//#include<iostream>
//using namespace std;
//int main()
//{
//	int i, j, k, m, x, count, a[100][100] = { 0 };
//	cin >> count;
//	int tag = count / 2;
//	j = i = tag;
//	for (k = 1, m = 1; k <= count*count;)
//	{
//		if (count == 1)
//		{
//			a[0][0] = 1;
//			break;
//		}
//		else
//		{
//			if (m == 3)
//			{
//				a[i][j++] = k++;
//				for (x = 1; x <= m - 2; x++)
//					a[i][j] = k++;
//				for (x = 1; x <= m - 2; x++)
//					a[--i][j] = k++;
//				for (x = 1; x <= m - 1; x++)
//					a[i][--j] = k++;
//				for (x = 1; x <= m - 1; x++)
//					a[++i][j] = k++;
//				for (x = 1; x <= m - 1; x++)
//					a[i][++j] = k++;
//			}
//			else if(m>3)
//			{
//				a[i][++j] = k++;
//				for (x = 1; x <= m - 2; x++)
//					a[--i][j] = k++;
//				for (x = 1; x <= m - 1; x++)
//					a[i][--j] = k++;
//				for (x = 1; x <= m - 1; x++)
//					a[++i][j] = k++;
//				for (x = 1; x <= m - 1; x++)
//					a[i][++j] = k++;
//			}
//		}
//		m += 2;
//	}
//	
//	for (i = 0; i < count; i++)
//	{
//		for (j = 0; j < count; j++)
//		{
//			cout.width(5);
//			cout << a[i][j];
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[100][100], i, j, n, m, k, x, sum = 0;
//	cin >> n;
//	if (1 == n)
//		a[0][0] = 1;
//	else
//	{
//		i = j = n / 2;
//		for (m = 1, k = 1; k <= n*n;)
//		{
//			if (3 == m)
//			{
//				a[i][j] = k++;
//				a[i][++j] = k++;
//				a[--i][j] = k++;
//				for (x = 1; x <= 2; x++)
//					a[i][--j] = k++;
//				for (x = 1; x <= 2; x++)
//					a[++i][j] = k++;
//				for (x = 1; x <= 2; x++)
//					a[i][++j] = k++;
//			}
//			else if (m>3)
//			{
//				a[i][++j] = k++;
//				for (x = 1; x<m-1; x++)
//					a[--i][j] = k++;
//				for (x = 1; x<m; x++)
//					a[i][--j] = k++;
//				for (x = 1; x<m; x++)
//					a[++i][j] = k++;
//				for (x = 1; x<m; x++)
//					a[i][++j] = k++;
//			}
//			m += 2;
//		}
//	}
//	for (i = 0; i<n; i++)
//	{
//		sum += a[i][i];
//		sum += a[i][n - i - 1];
//	}
//	sum -= a[n / 2][n / 2];
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<n; j++)
//			cout << a[i][j]<<" ";
//		cout << endl;
//	}
//	cout << sum;
//	return 0;
//}