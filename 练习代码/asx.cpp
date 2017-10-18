#include<iostream>
#include<stdlib.h>
using namespace std;
class A {
private:
	int H;
	int L;
	int **elem;
public:
	A(int a, int b);
	void shuru();
	void show();
};
A::A(int a, int b)
{
	H = a;
	L = b;
	elem = new int *[L];
	for (int i = 0; i < H; i++)
		elem[i] = new int[H];
}
void A::shuru()
{
	for (int i = 0; i < L; i++)
		for (int o = 0; o < H; o++)
			elem[i][o]=rand()%9+1;
}
void A::show()
{
	for (int i = 0; i < L; i++)
	{
		{
			for (int o = 0; o < H; o++)
				cout << elem[i][o] << " ";
		}
		cout << endl;
	}

}
int main()
{
	A o(1,10);
	o.shuru();
	o.show();
	system("pause");
}

