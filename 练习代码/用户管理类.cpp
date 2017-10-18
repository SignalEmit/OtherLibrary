#include <iostream>
#include<string.h>
using namespace std;
class user
{
	public:
		string name;
		string mima;
	public:
		void getuser(string a)
		{
			name=a;
			}
		void getci(string b)
		{
			mima=b;
		}
		
}; 


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	user ua[3],*p;
	ua[0].getuser("zhangrui");
	ua[0].getci("123466789");
	ua[1].getuser("chenbo");
	ua[1].getci("785");
	ua[2].getuser("theirson");
	ua[2].getci("964");
	cout<<"输入一个名字"<<endl;
	p=ua;
	string h;
	cin>>h;
for(int i=0;i<3;i++)
	{

		if(p->name==h)
			{
				cout<<"mimashi:"<<p->mima<<endl; 
				break;
			}
			else
			{
			p++;
			
				cout<<"输入错误"<<endl;
			}
	return 0;
}}
