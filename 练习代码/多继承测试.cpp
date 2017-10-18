#include<iostream>
using namespace std;
class ji
{
	protected:
		int u;
	public:
		void show()
		{
			cout<<"class ji"<<u<<endl;
		}
		void tual(int a)
		{
			u=a;
		}
		ji(int i)
		{
			u=i;
		}
};

class A:public ji
{
	protected:
		int x;
	public:
		A(int a,int i):ji(i) 
		{
			x=a;
		}
		void show()
		{
			cout<<"class A"<<x<<endl;
			ji::show();
		}
 };
 class B:public ji
 {
 	protected:
 		int y;
 	public:
 		B(int b,int o):ji(o)
 		{
 			y=b;
		 }
 		void show()
 		{
 			cout<<"class B"<<y<<endl;
 			ji::show();
		 }
};
class C: public A, public B
{
	private:
		int z;
	public:
		C(int k,int i,int p,int s):A(i,s),B(p,s)
		{
			z=k;
		}
		void show()
		{
			cout<<"class C"<<z<<x<<endl;
			B::show();
		}
};
int main()
{
	C s(1,2,3,4);
	s.A::tual(9999);
	s.show();
}
