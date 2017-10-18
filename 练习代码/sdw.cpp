#include<iostream>
#include<string.h>
using namespace std;
class A
{
private:
	char *str;
	int size;
	int maxsize;
public:
	A()
	{
		str = new char[maxsize];
		size = 0;
		maxsize = 0;
	}
	A(char *s)
	{
		maxsize = 100;
		str = new char[100];
		str = s;
		size = strlen(s);
		
	}
	void charu(int pos,const A&s2);
	void show();
};
void A::charu(int pos, const A&s2)
{
	pos--;
	int n;
	n=size;
	if (0 <= pos && pos + s2.size <maxsize)
	{
		for (; n> pos; n)
			str[n] = str[n + 1 + pos];
		pos++;
		int w;
		w = pos - 1;
		for (int i = 0; i < pos; i++)
		{
			str[w] = s2.str[i];
			w++;
		}
		size = size + pos;
	}

else
	{
		cout << "²åÈëÎªÖ÷´íÎó" << endl;
	system("pause");
	return;
	}
}
void A::show()
{
	for (int i = 0; i < size; i++)
		cout << str[i] << "  ";
	system("pause");
}
int main()
{
	A s1("asdasd");
	A s2("we");
	s1.charu(2, s2);
	s1.show();
	system("pause");
}
