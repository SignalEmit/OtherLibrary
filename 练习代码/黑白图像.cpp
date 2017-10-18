#include<iostream>
using namespace std;
const int Max = 100 + 10;
int main()
{
	cout << "请输入矩阵的阶数（eg：6 6）：";
	int m, n;
	int a[Max][Max];
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int o = 0; o < n; o++)
			a[i][o] = 0;

	cout << "请输入图的样子（eg：1 2  ）输入'！'结束:";
	for (;;)
	{
		int x, y;
		cin >> x;
		if (x != 9999)
		{
			cin >> y;
			a[x-1][y-1] = 1;
		}
		else
			break;
	}
	for (int i = 0; i < m; i++)
	{
		for (int o = 0; o < n; o++)
			cout << a[i][o] << " ";
		cout << endl;
	}
	system("pause");
	return 0;

}