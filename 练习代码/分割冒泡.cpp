#include<iostream>
using namespace std;
void jisuan(int &number)
{
	int jilu[10];
	int i;
	/*************�ָ�****************/
	for(i = 0;; i++)
	{
		if (number!= 0)
		{
			jilu[i] = number % 10;
			number = number / 10;
		}
		else
			break;
	}

	/*************�д�С����****************/
	for(int o=0;o<i;o++)
		for(int j=o+1;j<i;j++)
			if (jilu[o] > jilu[j])
			{
				int s = jilu[o];
				jilu[o] = jilu[j];
				jilu[j] = s;
			}

	/***************�������**********************/
	int max = 0;
	for (int y = i - 1; y >= 0; y--)
	{
		int cishu = 1;
		for (int sss = 0; sss < y; sss++)
			cishu = cishu * 10;
		max =jilu[y] * cishu+max;
		
	}
	/***************��������С**********************/
	int min = 0;
	for (int y = i - 1; y >= 0; y--)
	{
		int cishu = 1;
		for (int sss = 0; sss < y; sss++)
			cishu = cishu * 10;
		min = jilu[i-y-1] * cishu + min;

	}
	number = max - min;
}
int main()
{
	int a = 0;

	cout << "������һ������";
	int number;

	cin >> number;

	jisuan(number);
	cout << number<<"\n";

	jisuan(number);
	cout << number << "\n";

	jisuan(number);
	cout << number << "\n";

	jisuan(number);
	cout << number << "\n";

	jisuan(number);
	cout << number << "\n";

	cout << number;
	system("pause");
}