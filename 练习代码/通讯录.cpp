#include <iostream>
using namespace std;
class ceq
{
	private:
		string name;
		string adress;
		string phone;
	public:
		set(string a,string b,string c)
		{
			name=a;
			adress=b;
			phone=c;
		}
		
};

int main(int argc, char** argv) {
	int a;
	cin>>a;
	for(int i=0;i<a;i++)
	{ceq s[i];
	string a,b,c;
	 cout<<"输入姓名："<<"输入地址"<<"输入电话"<<endl;
	  cin>>a>>b>>c;
	  s[i].set(a,b,c);
}

	return 0;
}
