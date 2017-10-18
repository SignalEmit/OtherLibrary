#include<iostream>
using namespace std;
int main()
{
	int k;
	cout << "请输入正整数K：";
	cin >> k;
	for(int y=1;y<=2*k;y++)
	{
		int x;
		if(y!=k)
			x = y*k / (y - k);

		if(x!=0	&& x>=y)
			cout << "1/" << k << "=" << "1/" << x << "+1/" << y<< endl;
		
	}
	system("pause");
}
