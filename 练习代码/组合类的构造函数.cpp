#include <iostream>
using namespace std;
class fushe
{
	private:
		int x;
	public:
		fushe(int a)
		{
			x=a;
		}
		show()
		{
			cout<<"���˵ķ�ɫ��"<<x;
		}
};
class people
{
	private:
		fuse o;
		int xuehao;
	public:
		
		people(int l,int b);
		show()
		{
			cout<<"���˵�ѧ����"<<xuehao;
		}
};
people::people(int l,int b):o(b)
{xuehao=l;
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	people s1(1,2);
	s1.show();
	return 0;
}
