#include <iostream>
using namespace std;
class A
{public:
	show()
	{cout<<"����A"<<endl; 
	}
	~A()
	{cout<<"����A"<<endl;
	}
};
class B:public A
{public:
	show()
	{cout<<"����B"<<endl;
	}
	~B()
	{cout<<"����B"<<endl; 
	}
}; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	B s;
	A p;
	p.show();
	s.show();
	return 0;
}
