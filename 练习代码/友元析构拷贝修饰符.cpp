#include <iostream>
using namespace std;
class A
{private:
	int x;
	int y;
	friend class B;
public:
	void diaoyong(int a,int b);
	void show();
	 ~A();
	 friend class B;
};
void A::diaoyong(int a,int b)
{x=a;
y=b;
}
void A::show()
{cout<<"���x��y��ֵ"<<x<<" "<<y<<endl; 
}
 A::~A()
{cout<<"������������"<<endl; 
}
class B
{private:
	int h,l;
public:
int  Y(A v);
	void show();
};
int  Y(A v)
{
return (v.x+v.y);
}
void B::show()
{cout<<h+l<<endl;
}


int main(int argc, char** argv) {
	int a,b;
	cin>>a>>b;
	A c;
    c.diaoyong(a,b);
	c.show();
	B l;
	l.show();
	cout<<"��Ԫ����"<< Y(v)<<endl;
	return 0;
}
