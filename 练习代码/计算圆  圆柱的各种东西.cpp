#include <iostream>
using namespace std;
const double pi=3.1415926;
class ccircle
{
	private:
		double x;
	protected:
		double l;
		double s;
	public:
		ccircle(double a)
		{
			x=a;
		}
		zhouchang()
		{
			l=2*x*pi;
			}
		 mianji()
		{
			s=x*x*pi;
		}
		 void show()
		{
			cout<<"次元的面积是"<<s<<"次元的周长是"<<l<<endl;
		}
	};
class ccylinder:public ccircle
{
	private:
		double biaomianji;
		double h;
		double tiji;
	public:
		ccylinder(double x,double m):ccircle(x)
		{
			h=m;
		}
		void biao()
		{
			biaomianji=h*l+2*s;
		}
		void ti()
		{
			tiji=s*h;
		}
		void show()
		{
			cout<<"此圆柱的表面积："<<biaomianji<<"次援助的体积："<<tiji<<endl;
		 ccircle::show();} 
 } ;

int main(int argc, char** argv) {
	ccylinder s(1,1);
	s.zhouchang();
	s.mianji();
	s.biao();
	s.ti();
	s.show();
	
}
