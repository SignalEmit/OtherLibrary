#include <iostream>
using namespace std;
class A
{private:
	int x;
	int y;
 public:
 	set(int,int);
 	show();
 	A();
 	xua(const A &set);
};
A::A()
{x=0;
y=0;
}
A::set(int a,int b)
{
	x=a;
	y=b;
}
A::show()
{
	cout<<x<<y<<endl;
}
A::xua(const A &set)
{
	x=set.x+2;
	y=set.y+3;
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	A a;
	a.set(1,2);
	a.show();
	a.xua(a);
	a.show();
	return 0;
}
