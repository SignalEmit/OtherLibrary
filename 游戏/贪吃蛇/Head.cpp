#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<cstdlib>
#include<ctime>
const int Hang = 15;
const int Lie = 15;
const int WALL = 4;						//ǽ
const int She_tou = 9;					//��ͷ
const int She_shen = 1;					//����
const int Kongbai = 0;					//�հ״�
const int Food = 5;						//ʳ��
using namespace std;
struct Jiedian											//�ڵ�
{
	int data;											//�������
	int  x;												//����ߵ�x����
	int y;												//����ߵ�y����
	Jiedian *next;										//ָ����
	Jiedian(int X, int Y)
	{
		data = 9;
		x = X;
		y = Y;
		next = NULL;
	}
	Jiedian(int a, int X, int Y,Jiedian *l)		//��ʼ��
	{
		data = a;
		x = X;
		y = Y;
		next = l;
	}
	
};
struct lianbiao											//����
{
	int last_x;
	int last_y;
	Jiedian *Snack_Head;
	lianbiao( int x,int y)
	{
		Snack_Head = new Jiedian(x,y);
	}
	void Push_lianbiao(int a, int X, int Y);
	void Back(int k);
	~lianbiao()
	{
		Jiedian *p;
		p = Snack_Head;
		while (!p)
		{
			p = p->next;
			delete p;
		}
	}
};
class Snack
{
private:
	int i;													//��¼�߳���ͷ��ĳ���
	int Food_x;												//ʳ���x����
	int snack[Hang][Lie];
	int Food_y;												//ʳ���y����
	int snack_head_x;										//��ͷ��x����
	int snack_head_y;										//��ͷ��y����
public:
	
	Snack();
	void map();	
	void Suiji_Food();										//���ʳ��
	bool Cleck_Food();										//����Ƿ���ʳ��
	bool Eat_Food(lianbiao &s,int x,int y);					//�Ե�ʳ��
	bool Bang(int x, int y);								//��ײ���
	void Move_Up(lianbiao &s, Snack &w);								//������
	void Move_Down(lianbiao &s, Snack &w);								//������
	void Move_Left(lianbiao &s, Snack &w);								//������
	void Move_Right(lianbiao &s, Snack &w);							//������
	bool Back_Move_Cleck(lianbiao &s,int a, int b);			//����Ƿ����ƶ�
	bool Time(char *c,int nandu);										//������� ʱ����
	void Duqu(lianbiao s);									//��ȡ�����е�Ԫ�ض�����������¸�ֵ
	void GOGO(lianbiao &s, int x, int y);					//��һ�������ƶ�
	~Snack()
	{
	}
};