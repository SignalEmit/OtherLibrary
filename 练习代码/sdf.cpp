#include<iostream>
using namespace std;
class A
{
private:
	int a;
public:
	A(int b)
	{
		a = b;
	}
	friend A operator+(const A &s1,const A &s2)
	{
		A s3;
		s3.a = s1.a + s2.a;
	}
	void show()
	{
		cout << a << endl;
	}
};
int main()
{
	A d(3);
	A w(4);
	d.show();

}
