#include<iostream>
using namespace std;
class Card
{
protected:
	int Hao_Ma;
	int Mian;
	int Ji_shu;
public:
	void Star(int a,int b)
	{
		Hao_Ma = a;
		Mian = 1;
	}
};
class Work:public Card
{
public:
	void GOGOGO(int x);
	int Cleck();
};
void Work::GOGOGO(int x)
{
	if (Hao_Ma%x == 0)
		if (Mian == 1)
			Mian = 2;
		else
			Mian = 1;
}
int Work::Cleck()
{
	if (Mian == 1)
		return 1;
}
int main()
{
	Work s[52];
	for (int i = 1; i != 53; i++)
		s[i].Star(i, 1);
	int MuBiao = 2;
	while (MuBiao != 53)
	{
		int o = MuBiao;
		for (; o != 53; o++)
			s[o].GOGOGO(o);
		MuBiao++;
	}
	int p=0;
	for (int x = 1; x != 53; x++)
		if (s[x].Cleck() == 1)
			p++;
	cout << "正面朝上的牌有" << p << "张"<<endl;
	system("pause");
	return 0;
}