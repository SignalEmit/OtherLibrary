#include <iostream>
using namespace std;
class fangcheng{
	private:
		double a1;
		double a2;
		double c;
	public:
		fangcheng(int a=0,int b=0,int z=0)
		{
			a1=a;
			a2=b;
			c=z;
		}
		fangcheng operator /(fangcheng w)
		{	fangcheng s;
			s.a1=a1/w.a1;
			s.a2=a2/w.a1;
			s.c=c/w.a1;
			return s;
		}
		void bianhuan(fangcheng s1,fangcheng s2)
		{
			y=double((s1.c-s2.c)/(s1.a2-s2.a2));
			x=double((s1.c/s1.a1)-(s1.a2/s1.a1)*((s1.c-s2.c)/(s1.a2-s2.a2)));
			
		}
		void show()
		{
			cout<<"解得x="<<x<<"  解得y="<<y<<endl; 
		}
	protected:
		double x;
		double y;	
}; 

int main(int argc, char** argv) {
	double a,b,c,x,y,z;
	cin>>a>>b>>c;
	cout<<a<<"x+"<<b<<"y="<<c<<endl;
	fangcheng obj1(a,b,c);
	cin>>x>>y>>z;
	cout<<x<<"x+"<<y<<"y="<<z<<endl;
	fangcheng obj2(x,y,z);
	obj1=obj1/obj1;
	obj1.bianhuan(obj1,obj2);
	obj1.show();
	
	return 0;
}
