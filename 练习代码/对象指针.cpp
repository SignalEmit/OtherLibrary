#include <iostream>
using namespace std;
class A
{private:
	int x;
 public:
  p(int a); 
	void show(); 
	
};
A::p(int a)
{x=a;
}
void A::show()
{cout<<x<<endl;
}
class B
{private:
	int x;
public:
	Q(int b)
	{x=b;
	}
	void show()
	{
		cout<<x<<endl;
	}
};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x;
	cin>>x;
	A a;
	a.p(x);
    B *p; 
	p=&a;
	p->show();
}
