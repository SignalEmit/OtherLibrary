#include <iostream>
using namespace std;
class a
{
	protected:
		int a;
		public:
			virtual set(int b)
			{
				a=b;
			}
			virtual void show()
			{cout<<"a="<<a<<endl;
			}
 } ;
 class b:public a
 {public:
 	set(int b)
 	{
 		p=b;
	 }
	 void show()
	 {
	 	cout<<"a="<<a<<"b="<<p<<endl;
	 }
	 private:
	 	int p;
 };
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	a o,*i;
	o.set(7);
	b n;
	n.set(8);
o.show();
	return 0;
}
