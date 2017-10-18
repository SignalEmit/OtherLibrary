#include<iostream>
class A
{ private:
	int x;
public:
	A()
	{x=0;
	}
	shuru(int a)
	{
		x=a;
	}
	void show()
	{
		std::cout<<x<<std::endl;
	}
};
int main()
{
	A l;
	l.show();
	l.shuru(7);
	l.show();
}
