#include <iostream>
using namespace std;
class chenyuan
{protected:
	string  xingming;
	int	xuehao;
public:
	void show()
	{cout<<"此人的姓名是"<<xingming<<"   "<<"此人的学号是"<<xuehao<<endl;
	}
	chenyuan(string a,int b);
	
};
chenyuan::chenyuan(string a,int b)
	{xingming=a;
	 xuehao=b;
	}
class hansomeboy:public chenyuan
{
private:
	int yanzhi;
public:
	hansomeboy(string a,int b,int c):chenyuan(a,b)
	{yanzhi=c;
	}
	void show()
	{cout<<"此人的姓名是："<<xingming<<"    此人的学号是："<<xuehao<<"    此人的颜值是：" <<yanzhi<<endl; 
    } 
};
int main(int argc, char** argv) {
	string s="闫晨勃";
	hansomeboy NO1(s,1,100);
	NO1.show();
	return 0;
}
