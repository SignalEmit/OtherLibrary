#include<iostream>
#include<algorithm>
#include<ctime>
using namespace std;
int main()
{
	cout << 1e10;
	srand(time_t(NULL));
	int a[100000];
	for (int i = 0; i < 100000; i++)
		a[i] = rand() % 100000;
	sort(a, a + 100000);
	

	
	while (1)
	{
		int c;
		cin >> c;
		int shou=0, wei=100000-1;
		while (1)
		{
			if ((shou + wei) / 2 == shou)
			{
				cout << "没找到";
				break;
			}
			else
			{
				int now = (shou + wei) / 2;
				if (a[now] == c)
				{
					cout << "此数字存在";
					break;

				}
				else if (a[now] > c)
				{
					wei = now;
				}
				else
				{
					shou = now;
				}
			}
		}
	}

	system("pause");
}