#include <iostream>
using namespace std;
class A
{private:
	int x;
	int y;
public:
	void set(int ,int);
	void show();
	friend class B;
	int jiafa();
	};
int A::jiafa()
{return (x+y);
}
void A::set(int a,int b)
{x=a;
y=b;
}
void A::show()
{cout<<"输出x="<<x<<"    "<<"输出y="<<y<<endl; 
}
class B{ 
private:
	int c;
	int z;
public:
	
	void set(A o);
	void show();
	friend int youyuan(B);
};
int youyuan(B x)
{return(x.z+x.c);
}
void B::show()
{cout<<"输出c="<<c<<"    "<<"输出z="<<z<<endl; 
}
void B::set(A o)
{c=o.x+3;
 z=o.y+5;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	A s1[3];
	s1[0].set(1,2);
	s1[0].show();
	s1[1].set(3,6);
	s1[1].show();
	s1[2].set(7,8);
	s1[2].show();
	B s2;
	s2.set(s1[0]);
	s2.show();
	A *p;
	p=s1;
	p->show();
	p++;
	p->show();
	p++; 
	p->show();
	A *p1;
	p1->jiafa();
	cout<<*p1<<endl;
	cout<<youyuan(s2)<<endl;
	return 0;
}
