#include <iostream>
using namespace std;
class chenyuan
{protected:
	string  xingming;
	int	xuehao;
public:
	void show()
	{cout<<"���˵�������"<<xingming<<"   "<<"���˵�ѧ����"<<xuehao<<endl;
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
	{cout<<"���˵������ǣ�"<<xingming<<"    ���˵�ѧ���ǣ�"<<xuehao<<"    ���˵���ֵ�ǣ�" <<yanzhi<<endl; 
    } 
};
int main(int argc, char** argv) {
	string s="�Ƴ���";
	hansomeboy NO1(s,1,100);
	NO1.show();
	return 0;
}
