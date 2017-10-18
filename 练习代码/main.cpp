#include <iostream>
using namespace std;
template<class s>
s name(s a,s b)
{
return a>=b?a:b;
 } 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,s;
	cin>>a>>b;
	s=name(a,b);
	cout<<"max="<<s<<endl;
	double c,p,z;
	cin>>c>>p;
	z=name(c,p);
	cout<<"max="<<z<<endl;
	char u,i,o;
	cin>>u>>i;
	o=name(u,i);
	cout<<"max="<<o<<endl;
	return 0;
}
