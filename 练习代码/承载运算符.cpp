#include<iostream>
using namespace std;
class B
{
private:
	int size;
	char *elem;
public:
	B(int y)
	{
		size = y;
		elem = new char[size + 50];
		for (int i = 1; i <= size; i++)
			cin >> elem[i];
	}
	char & operator[](int i)		//承载去下表
	{
		if(i<0||i>=size)
		{
			cout << "下表不存在" << endl;
			exit(1);
		}
		return elem[i];
	}
	B &operator=(const B &a)		//承载赋值运算符
	{
		delete elem;
		elem = new char[a.size];
		for (int i = 1; i <= a.size; i++)
			elem[i] = a.elem[i];
		size = a.size;
	}
	void show()
	{
		for (int i = 1; i <= size; i++)
			cout << elem[i] << "  ";
	}

};
class A
{
private:
	int a;
	int b;
public:
	A()
	{
		a = 0;
		b = 0;
	}
	A(int l,int m)
	{
		a = l;
		b = m;
	}
	
friend A operator  +(const A &s1,const A & s2)
	{
		A c;
		c.a = s1.a + s2.a;
		c.b =s1.b + s2.b;
		return c;
	}
A operator+(const A&s1)
{
	A temp;
	temp.a = a + s1.a;
	temp.b = b + s1.a;
	return temp;

}
	void show()
	{
		cout << a<<" " << b << endl;
		system("pause");
	}

};
int main()
{
	A s1(9, 9);
	A s2(9,9),s3;
	s1=s1.operator+(s2);
	s1.show();
	s3 = s1 + s2;
	s3.show();
	s3=  s2;
	s3.show();
	B a(3);
	B b=a;
	b.show();
	cout << a[1] << endl;
	system("pause");

}