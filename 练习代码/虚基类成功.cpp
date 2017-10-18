#include<iostream>
using namespace std;
class A
{public:
	A()
	{
		cout<<"case A"<<endl;
	}
	void show()
	{
		cout<<"case A"<<endl;
	}
};
class B:virtual public A
{public:
	B() 
	{
		cout<<"case B"<<endl;
	}
	void show()
	{
		cout<<"case B"<<endl;
	}
	
};
class C:virtual public A
{public:
	C()
	{
		cout<<"case C"<<endl;
	}
	void show()
	{
		cout<<"case C"<<endl;
	}
	
};
class D:virtual public B, virtual public C
{public:
	D()
	{
		cout<<"case D"<<endl;
	}
	void show()
	{
		cout<<"case D"<<endl;
	}
};
int main()
{
	D s;
	s.show();
}
