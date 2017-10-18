#include<iostream>
using namespace std;
int main()
{
	cout << "ÇëÊäÈën:";
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int o = 1; o < i; o++)
			cout << " ";
		for (int s=1; s <= (2 *(n-i)+1); s++)
			printf("#");
		cout << "\n";
	}
	system("pause");
}
