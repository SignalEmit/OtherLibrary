#include <iostream>
using namespace std;
class A
{private:
	int x;
public:
	a(); 
	void chushihua(int u);
	A(const A&s);
	void show();
 } ;
 
 void A::chushihua(int u)
 {x=u;
  } 
 A::A(const A&s)
{x=s.x;
}
void A::show()
{cout<<x<<endl;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int m;
	cin>>m;
	A a;
	a.chushihua(m);
	A b;
	b.chushihua(a);
	cout<<b.show()<<endl; 

	cout<<"×ø±êÊÇ"<<a.show()<<endl; 
	return 0;
}
