#include <iostream>
using namespace std;
class DATE
{private :
	int year;
	int month;
	int day;
public:
	 SetDate(int y,int m,int d);
	

	 show();

	
 }; 
  DATE::SetDate(int y,int m,int d)
		{year=y;
		month=m;
		day=d;
		}

	DATE::show()
	{cout<<year<<"Äê"<<month<<"ÔÂ"<<day<<"ÈÕ";}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;
	DATE d1;
	d1.SetDate(a,b,c);
	d1.show();

	
	return 0;
}
