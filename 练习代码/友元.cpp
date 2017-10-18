#include <iostream>
using namespace std;
class A
{private:
	int a;
	friend class B;
public:
	 p(int w);
	void s();
	};
class B
{private:
	int c;
public:
	 n(A y);

	void show();
};
 A::p(int w)
{a=w;
}
void A::s()
{cout<<a<<"²Â²ÂÕâÊÇÉ¶"<<endl; 
}
 B::n(A y)
{c=y.a;
}
void B::show()
{cout<<c<<"ÄãÂé±Ô"<<endl;
}


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	A s;
	s.p(7);
	s.s();
	B o;
	o.show();
	return 0;
}
