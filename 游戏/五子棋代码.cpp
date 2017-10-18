
#include<iostream>
#include<conio.h>
using namespace std;
const int H = 15;
const int L = 15;
class Player_one
{
private:
	int D_x;
	int D_y;
public:
	void DingWei_one(int a[L][H]);//最初定位
	void DingWei_two(int a[L][H]);//当玩家二昨晚后 再次定位
	void Move(int a[L][H],char c);
	int Cleck_Hang(int a[L][H]);
	int Cleck_Lie(int a[L][H]);
	int Cleck_Xie_one(int a[L][H]);
	int Cleck_Xie_two(int a[L][H]);
};
class Player_two
{
private:
	int D_x;
	int D_y;
public:
	void DingWei(int a[L][H]);//玩家1昨晚后定位
	void Move(int a[L][H],char c);
	int Cleck_Hang(int a[L][H]);
	int Cleck_Lie(int a[L][H]);
	int Cleck_Xie_one(int a[L][H]);
	int Cleck_Xie_two(int a[L][H]);
};
class Show_Player_two
{
public:
	void show(int a[L][H]);
};
class Show_Player_one
{
public:
	void show(int a[L][H]);
};

void Show_Player_one::show(int a[L][H])
{
	for (int x = 0; x != L; x++)
	{
		for (int y = 0; y != H; y++)
			switch (a[x][y])
			{
			case 9:cout << "■"; break;//墙体
			case 0:cout << "□"; break;//格子
			case 1:cout << "★"; break;//一号的棋子
			case 2:cout << "●"; break;//二号的棋子
			case 3:cout << "▲"; break;//一号于一号重叠
			case 4:cout << "▼"; break;//一号与二号重叠
			case 10:cout << "♀"; break;//我的位置
			default:
				break;
			}
		cout << endl;
	}
}
void Player_one::Move(int a[L][H], char c)
{
	if (c != 'j')
	{
		switch (c)
		{
		case 'w': {
			if (a[D_x][D_y] != 3 && a[D_x][D_y] != 4)
			{
				if (a[D_x - 1][D_y] != 9 && a[D_x - 1][D_y] != 1 && a[D_x - 1][D_y] != 2)
				{
					a[D_x - 1][D_y] = 10;
					a[D_x][D_y] = 0;
					D_x -= 1;
				}
				else if (a[D_x - 1][D_y] == 1)
				{
					a[D_x - 1][D_y] = 3;
					a[D_x][D_y] = 0;
					D_x -= 1;
				}
				else if (a[D_x - 1][D_y] == 2)
				{
					a[D_x - 1][D_y] = 4;
					a[D_x][D_y] = 0;
					D_x -= 1;
				}
			}
			else if (a[D_x][D_y] == 3)
			{
				if (a[D_x - 1][D_y] != 9 && a[D_x - 1][D_y] != 1 && a[D_x - 1][D_y] != 2)
				{
					a[D_x - 1][D_y] = 10;
					a[D_x][D_y] = 1;
					D_x -= 1;
				}
				else if (a[D_x - 1][D_y] == 1)
				{
					a[D_x - 1][D_y] = 3;
					a[D_x][D_y] = 1;
					D_x -= 1;
				}
				else if (a[D_x - 1][D_y] == 2)
				{
					a[D_x - 1][D_y] = 4;
					a[D_x][D_y] = 1;
					D_x -= 1;
				}
			}
			else if (a[D_x][D_y] == 4)
			{
				if (a[D_x - 1][D_y] != 9 && a[D_x - 1][D_y] != 1 && a[D_x - 1][D_y] != 2)
				{
					a[D_x - 1][D_y] = 10;
					a[D_x][D_y] = 2;
					D_x -= 1;
				}
				else if (a[D_x - 1][D_y] == 1)
				{
					a[D_x - 1][D_y] = 3;
					a[D_x][D_y] = 2;
					D_x -= 1;
				}
				else if (a[D_x - 1][D_y] == 2)
				{
					a[D_x - 1][D_y] = 4;
					a[D_x][D_y] = 2;
					D_x -= 1;
				}
			}
		}; break;
		case 'a': {
			if (a[D_x][D_y] != 3 && a[D_x][D_y] != 4)
			{
				if (a[D_x][D_y - 1] != 9 && a[D_x][D_y - 1] != 1 && a[D_x][D_y - 1] != 2)
				{
					a[D_x][D_y - 1] = 10;
					a[D_x][D_y] = 0;
					D_y -= 1;
				}
				else if (a[D_x][D_y - 1] == 1)
				{
					a[D_x][D_y - 1] = 3;
					a[D_x][D_y] = 0;
					D_y -= 1;
				}
				else if (a[D_x][D_y - 1] == 2)
				{
					a[D_x][D_y - 1] = 4;
					a[D_x][D_y] = 0;
					D_y -= 1;
				}
			}
			else if (a[D_x][D_y] == 3)
			{
				if (a[D_x][D_y - 1] != 9 && a[D_x][D_y - 1] != 1 && a[D_x][D_y - 1] != 2)
				{
					a[D_x][D_y - 1] = 10;
					a[D_x][D_y] = 1;
					D_y -= 1;
				}
				else if (a[D_x][D_y - 1] == 1)
				{
					a[D_x][D_y - 1] = 3;
					a[D_x][D_y] = 1;
					D_y -= 1;
				}
				else if (a[D_x][D_y - 1] == 2)
				{
					a[D_x][D_y - 1] = 4;
					a[D_x][D_y] = 1;
					D_y -= 1;
				}
			}
			else if (a[D_x][D_y] == 4)
			{
				if (a[D_x][D_y - 1] != 9 && a[D_x][D_y - 1] != 1 && a[D_x][D_y - 1] != 2)
				{
					a[D_x][D_y - 1] = 10;
					a[D_x][D_y] = 2;
					D_y -= 1;
				}
				else if (a[D_x][D_y - 1] == 1)
				{
					a[D_x][D_y - 1] = 3;
					a[D_x][D_y] = 2;
					D_y -= 1;
				}
				else if (a[D_x][D_y - 1] == 2)
				{
					a[D_x][D_y - 1] = 4;
					a[D_x][D_y] = 2;
					D_y -= 1;
				}
			}
		}; break;
		case 's': {
			if (a[D_x][D_y] != 3 && a[D_x][D_y] != 4)
			{
				if (a[D_x + 1][D_y] != 9 && a[D_x + 1][D_y] != 1 && a[D_x + 1][D_y] != 2)
				{
					a[D_x + 1][D_y] = 10;
					a[D_x][D_y] = 0;
					D_x += 1;
				}
				else if (a[D_x + 1][D_y] == 1)
				{
					a[D_x + 1][D_y] = 3;
					a[D_x][D_y] = 0;
					D_x += 1;
				}
				else if (a[D_x + 1][D_y] == 2)
				{
					a[D_x + 1][D_y] = 4;
					a[D_x][D_y] = 0;
					D_x += 1;
				}
			}
			else if (a[D_x][D_y] == 3)
			{
				if (a[D_x + 1][D_y] != 9 && a[D_x + 1][D_y] != 1 && a[D_x + 1][D_y] != 2)
				{
					a[D_x + 1][D_y] = 10;
					a[D_x][D_y] = 1;
					D_x += 1;
				}
				else if (a[D_x + 1][D_y] == 1)
				{
					a[D_x + 1][D_y] = 3;
					a[D_x][D_y] = 1;
					D_x += 1;
				}
				else if (a[D_x + 1][D_y] == 2)
				{
					a[D_x + 1][D_y] = 4;
					a[D_x][D_y] = 1;
					D_x += 1;
				}
			}
			else if (a[D_x][D_y] == 4)
			{
				if (a[D_x + 1][D_y] != 9 && a[D_x + 1][D_y] != 1 && a[D_x + 1][D_y] != 2)
				{
					a[D_x + 1][D_y] = 10;
					a[D_x][D_y] = 2;
					D_x += 1;
				}
				else if (a[D_x + 1][D_y] == 1)
				{
					a[D_x + 1][D_y] = 3;
					a[D_x][D_y] = 2;
					D_x += 1;
				}
				else if (a[D_x + 1][D_y] == 2)
				{
					a[D_x + 1][D_y] = 4;
					a[D_x][D_y] = 2;
					D_x += 1;
				}
			}
		}; break;
		case 'd': {
			if (a[D_x][D_y] != 3 && a[D_x][D_y] != 4)
			{
				if (a[D_x][D_y + 1] != 9 && a[D_x][D_y + 1] != 1 && a[D_x][D_y + 1] != 2)
				{
					a[D_x][D_y + 1] = 10;
					a[D_x][D_y] = 0;
					D_y += 1;
				}
				else if (a[D_x][D_y + 1] == 1)
				{
					a[D_x][D_y + 1] = 3;
					a[D_x][D_y] = 0;
					D_y += 1;
				}
				else if (a[D_x][D_y + 1] == 2)
				{
					a[D_x][D_y + 1] = 4;
					a[D_x][D_y] = 0;
					D_y += 1;
				}
			}
			else if (a[D_x][D_y] == 3)
			{
				if (a[D_x][D_y + 1] != 9 && a[D_x][D_y + 1] != 1 && a[D_x][D_y + 1] != 2)
				{
					a[D_x][D_y + 1] = 10;
					a[D_x][D_y] = 1;
					D_y += 1;
				}
				else if (a[D_x][D_y + 1] == 1)
				{
					a[D_x][D_y + 1] = 3;
					a[D_x][D_y] = 1;
					D_y += 1;
				}
				else if (a[D_x][D_y + 1] == 2)
				{
					a[D_x][D_y + 1] = 4;
					a[D_x][D_y] = 1;
					D_y += 1;
				}
			}
			else if (a[D_x][D_y] == 4)
			{
				if (a[D_x][D_y + 1] != 9 && a[D_x][D_y + 1] != 1 && a[D_x][D_y + 1] != 2)
				{
					a[D_x][D_y + 1] = 10;
					a[D_x][D_y] = 2;
					D_y += 1;
				}
				else if (a[D_x][D_y + 1] == 1)
				{
					a[D_x][D_y + 1] = 3;
					a[D_x][D_y] = 2;
					D_y += 1;
				}
				else if (a[D_x][D_y + 1] == 2)
				{
					a[D_x][D_y + 1] = 4;
					a[D_x][D_y] = 2;
					D_y += 1;
				}
			}
		}; break;
		}
	}
	else if (c == 'j'&&a[D_x][D_y] != 4)
		a[D_x][D_y] = 3;
}
void Player_one::DingWei_one(int a[L][H])
{
	for (int x = 0; x != L; x++)
		for (int y = 0; y != H; y++)
			if (a[x][y] == 10)
			{
				D_x = x;
				D_y = y;
			}
}
void Player_one::DingWei_two(int a[L][H])
{
	for (int x = 0; x != L; x++)
		for (int y = 0; y != H; y++)
			if (a[x][y] == 4)
			{
				D_x = x;
				D_y = y;
			}
}
int Player_one::Cleck_Hang(int a[L][H])
{
	int p = D_x;
	int q = D_y;
	int i = 0;
	while (a[p][q] == 3 || a[p][q] == 1)
		q--;
	q++;
	while (a[p][q] == 1 || a[p][q] == 3)
	{
		i++;
		q++;
	}
	if (i == 5)
		return 1;
	else
		return 2;
}
int Player_one::Cleck_Lie(int a[L][H])
{
	int p = D_x;
	int q = D_y;
	int i = 0;
	while (a[p][q] == 3 || a[p][q] == 1)
		p--;
	p++;
	while (a[p][q] == 3 || a[p][q] == 1)
	{
		p++;
		i++;
	}
	if (i == 5)
		return 1;
	else
		return 2;
}
int Player_one::Cleck_Xie_one(int a[L][H])
{
	int p = D_x;
	int q = D_y;
	int i = 0;
	while (a[p][q] == 3 || a[p][q] == 1)
	{
		p--;
		q--;
	}
	p++;
	q++;
	while (a[p][q] == 3 || a[p][q] == 1)
	{
		p++;
		q++;
		i++;
	}
	if (i == 5)
		return 1;
	else
		return 2;
}
int Player_one::Cleck_Xie_two(int a[L][H])
{
	int p = D_x;
	int q = D_y;
	int i = 0;
	while (a[p][q] == 3 || a[p][q] == 1)
	{
		p--;
		q++;
	}
	p++;
	q--;
	while (a[p][q] == 3 || a[p][q] == 1)
	{
		p++;
		q--;
		i++;
	}
	if (i == 5)
		return 1;
	else
		return 2;
}
void Show_Player_two::show(int a[L][H])
{
	for (int x = 0; x != L; x++)
	{
		for (int y = 0; y != H; y++)
			switch (a[x][y])
			{
			case 9:cout << "■"; break;//墙体
			case 0:cout << "□"; break;//格子
			case 1:cout << "★"; break;//一号的棋子
			case 2:cout << "●"; break;//二号的棋子
			case 3:cout << "△"; break;//二号于一号重叠
			case 4:cout << "▽"; break;//二号与二号重叠
			case 10:cout << "♂"; break;//我的位置
			default:
				break;
			}
		cout << endl;
	}
}
void Player_two::DingWei(int a[L][H])
{
	for (int x = 0; x != L; x++)
		for (int y = 0; y != H; y++)
			if (a[x][y] == 3)
			{
				D_x = x;
				D_y = y;
			}
}
void Player_two::Move(int a[L][H], char c)
{
	if (c != 'k')
	{
		switch (c)
		{
		case 'w': {
			if (a[D_x][D_y] != 3 && a[D_x][D_y] != 4)
			{
				if (a[D_x - 1][D_y] != 9 && a[D_x - 1][D_y] != 1 && a[D_x - 1][D_y] != 2)
				{
					a[D_x - 1][D_y] = 10;
					a[D_x][D_y] = 0;
					D_x -= 1;
				}
				else if (a[D_x - 1][D_y] == 1)
				{
					a[D_x - 1][D_y] = 3;
					a[D_x][D_y] = 0;
					D_x -= 1;
				}
				else if (a[D_x - 1][D_y] == 2)
				{
					a[D_x - 1][D_y] = 4;
					a[D_x][D_y] = 0;
					D_x -= 1;
				}
			}
			else if (a[D_x][D_y] == 3)
			{
				if (a[D_x - 1][D_y] != 9 && a[D_x - 1][D_y] != 1 && a[D_x - 1][D_y] != 2)
				{
					a[D_x - 1][D_y] = 10;
					a[D_x][D_y] = 1;
					D_x -= 1;
				}
				else if (a[D_x - 1][D_y] == 1)
				{
					a[D_x - 1][D_y] = 3;
					a[D_x][D_y] = 1;
					D_x -= 1;
				}
				else if (a[D_x - 1][D_y] == 2)
				{
					a[D_x - 1][D_y] = 4;
					a[D_x][D_y] = 1;
					D_x -= 1;
				}
			}
			else if (a[D_x][D_y] == 4)
			{
				if (a[D_x - 1][D_y] != 9 && a[D_x - 1][D_y] != 1 && a[D_x - 1][D_y] != 2)
				{
					a[D_x - 1][D_y] = 10;
					a[D_x][D_y] = 2;
					D_x -= 1;
				}
				else if (a[D_x - 1][D_y] == 1)
				{
					a[D_x - 1][D_y] = 3;
					a[D_x][D_y] = 2;
					D_x -= 1;
				}
				else if (a[D_x - 1][D_y] == 2)
				{
					a[D_x - 1][D_y] = 4;
					a[D_x][D_y] = 2;
					D_x -= 1;
				}
			}
		}; break;
		case 'a': {
			if (a[D_x][D_y] != 3 && a[D_x][D_y] != 4)
			{
				if (a[D_x][D_y - 1] != 9 && a[D_x][D_y - 1] != 1 && a[D_x][D_y - 1] != 2)
				{
					a[D_x][D_y - 1] = 10;
					a[D_x][D_y] = 0;
					D_y -= 1;
				}
				else if (a[D_x][D_y - 1] == 1)
				{
					a[D_x][D_y - 1] = 3;
					a[D_x][D_y] = 0;
					D_y -= 1;
				}
				else if (a[D_x][D_y - 1] == 2)
				{
					a[D_x][D_y - 1] = 4;
					a[D_x][D_y] = 0;
					D_y -= 1;
				}
			}
			else if (a[D_x][D_y] == 3)
			{
				if (a[D_x][D_y - 1] != 9 && a[D_x][D_y - 1] != 1 && a[D_x][D_y - 1] != 2)
				{
					a[D_x][D_y - 1] = 10;
					a[D_x][D_y] = 1;
					D_y -= 1;
				}
				else if (a[D_x][D_y - 1] == 1)
				{
					a[D_x][D_y - 1] = 3;
					a[D_x][D_y] = 2;
					D_y -= 1;
				}
				else if (a[D_x][D_y - 1] == 2)
				{
					a[D_x][D_y - 1] = 4;
					a[D_x][D_y] = 1;
					D_y -= 1;
				}
			}
			else if (a[D_x][D_y] == 4)
			{
				if (a[D_x][D_y - 1] != 9 && a[D_x][D_y - 1] != 1 && a[D_x][D_y - 1] != 2)
				{
					a[D_x][D_y - 1] = 10;
					a[D_x][D_y] = 2;
					D_y -= 1;
				}
				else if (a[D_x][D_y - 1] == 1)
				{
					a[D_x][D_y - 1] = 3;
					a[D_x][D_y] = 2;
					D_y -= 1;
				}
				else if (a[D_x][D_y - 1] == 2)
				{
					a[D_x][D_y - 1] = 4;
					a[D_x][D_y] = 2;
					D_y -= 1;
				}
			}
		}; break;
		case 's': {
			if (a[D_x][D_y] != 3 && a[D_x][D_y] != 4)
			{
				if (a[D_x + 1][D_y] != 9 && a[D_x + 1][D_y] != 1 && a[D_x + 1][D_y] != 2)
				{
					a[D_x + 1][D_y] = 10;
					a[D_x][D_y] = 0;
					D_x += 1;
				}
				else if (a[D_x + 1][D_y] == 1)
				{
					a[D_x + 1][D_y] = 3;
					a[D_x][D_y] = 0;
					D_x += 1;
				}
				else if (a[D_x + 1][D_y] == 2)
				{
					a[D_x + 1][D_y] = 4;
					a[D_x][D_y] = 0;
					D_x += 1;
				}
			}
			else if (a[D_x][D_y] == 3)
			{
				if (a[D_x + 1][D_y] != 9 && a[D_x + 1][D_y] != 1 && a[D_x + 1][D_y] != 2)
				{
					a[D_x + 1][D_y] = 10;
					a[D_x][D_y] = 1;
					D_x += 1;
				}
				else if (a[D_x + 1][D_y] == 1)
				{
					a[D_x + 1][D_y] = 3;
					a[D_x][D_y] = 1;
					D_x += 1;
				}
				else if (a[D_x + 1][D_y] == 2)
				{
					a[D_x + 1][D_y] = 4;
					a[D_x][D_y] = 1;
					D_x += 1;
				}
			}
			else if (a[D_x][D_y] == 4)
			{
				if (a[D_x + 1][D_y] != 9 && a[D_x + 1][D_y] != 1 && a[D_x + 1][D_y] != 2)
				{
					a[D_x + 1][D_y] = 10;
					a[D_x][D_y] = 2;
					D_x += 1;
				}
				else if (a[D_x + 1][D_y] == 1)
				{
					a[D_x + 1][D_y] = 3;
					a[D_x][D_y] = 2;
					D_x += 1;
				}
				else if (a[D_x + 1][D_y] == 2)
				{
					a[D_x + 1][D_y] = 4;
					a[D_x][D_y] = 2;
					D_x += 1;
				}
			}
		}; break;
		case 'd': {
			if (a[D_x][D_y] != 3 && a[D_x][D_y] != 4)
			{
				if (a[D_x][D_y + 1] != 9 && a[D_x][D_y + 1] != 1 && a[D_x][D_y + 1] != 2)
				{
					a[D_x][D_y + 1] = 10;
					a[D_x][D_y] = 0;
					D_y += 1;
				}
				else if (a[D_x][D_y + 1] == 1)
				{
					a[D_x][D_y + 1] = 3;
					a[D_x][D_y] = 0;
					D_y += 1;
				}
				else if (a[D_x][D_y + 1] == 2)
				{
					a[D_x][D_y + 1] = 4;
					a[D_x][D_y] = 0;
					D_y += 1;
				}
			}
			else if (a[D_x][D_y] == 3)
			{
				if (a[D_x][D_y + 1] != 9 && a[D_x][D_y + 1] != 1 && a[D_x][D_y + 1] != 2)
				{
					a[D_x][D_y + 1] = 10;
					a[D_x][D_y] = 1;
					D_y += 1;
				}
				else if (a[D_x][D_y + 1] == 1)
				{
					a[D_x][D_y + 1] = 3;
					a[D_x][D_y] = 1;
					D_y += 1;
				}
				else if (a[D_x][D_y + 1] == 2)
				{
					a[D_x][D_y + 1] = 4;
					a[D_x][D_y] = 1;
					D_y += 1;
				}
			}
			else if (a[D_x][D_y] == 4)
			{
				if (a[D_x][D_y + 1] != 9 && a[D_x][D_y + 1] != 1 && a[D_x][D_y + 1] != 2)
				{
					a[D_x][D_y + 1] = 10;
					a[D_x][D_y] = 2;
					D_y += 1;
				}
				else if (a[D_x][D_y + 1] == 1)
				{
					a[D_x][D_y + 1] = 3;
					a[D_x][D_y] = 2;
					D_y += 1;
				}
				else if (a[D_x][D_y + 1] == 2)
				{
					a[D_x][D_y + 1] = 4;
					a[D_x][D_y] = 2;
					D_y += 1;
				}
			}
		}; break;
		}
	}
	else if (c == 'k'&&a[D_x][D_y] != 3)
		a[D_x][D_y] = 4;
}
int Player_two::Cleck_Hang(int a[L][H])
{
	int p = D_x;
	int q = D_y;
	int i = 0;
	while (a[p][q] == 4 || a[p][q] == 2)
		q--;
	q++;
	while (a[p][q] == 4 || a[p][q] == 2)
	{
		i++;
		q++;
	}
	if (i == 5)
		return 1;
	else
		return 2;
}
int Player_two::Cleck_Lie(int a[L][H])
{
	int p = D_x;
	int q = D_y;
	int i = 0;
	while (a[p][q] == 4 || a[p][q] == 2)
		p--;
	p++;
	while (a[p][q] == 4 || a[p][q] == 2)
	{
		p++;
		i++;
	}
	if (i == 5)
		return 1;
	else
		return 2;
}
int Player_two::Cleck_Xie_one(int a[L][H])
{
	int p = D_x;
	int q = D_y;
	int i = 0;
	while (a[p][q] == 4 || a[p][q] == 2)
	{
		p--;
		q--;
	}
	p++;
	q++;
	while (a[p][q] == 4 || a[p][q] == 2)
	{
		p++;
		q++;
		i++;
	}
	if (i == 5)
		return 1;
	else
		return 2;
}
int Player_two::Cleck_Xie_two(int a[L][H])
{
	int p = D_x;
	int q = D_y;
	int i = 0;
	while (a[p][q] == 4 || a[p][q] == 2)
	{
		p--;
		q++;
	}
	p++;
	q--;
	while (a[p][q] == 4 || a[p][q] == 2)
	{
		p++;
		q--;
		i++;
	}
	if (i == 5)
		return 1;
	else
		return 2;
}
int main()
{
	int a[15][15] =
	 {
		{ 9,9,9,9,9,9,9,9,9,9,9,9,9,9,9, },
		{ 9,0,0,0,0,0,0,0,0,0,0,0,0,0,9, },
		{ 9,0,0,0,0,0,0,0,0,0,0,0,0,0,9, },
		{ 9,0,0,0,0,0,0,0,0,0,0,0,0,0,9, },
		{ 9,0,0,0,0,0,0,10,0,0,0,0,0,0,9, },
		{ 9,0,0,0,0,0,0,0,0,0,0,0,0,0,9, },
		{ 9,0,0,0,0,0,0,0,0,0,0,0,0,0,9, },
		{ 9,0,0,0,0,0,0,0,0,0,0,0,0,0,9, },
		{ 9,0,0,0,0,0,0,0,0,0,0,0,0,0,9, },
		{ 9,0,0,0,0,0,0,0,0,0,0,0,0,0,9, },
		{ 9,0,0,0,0,0,0,0,0,0,0,0,0,0,9, },
		{ 9,0,0,0,0,0,0,0,0,0,0,0,0,0,9, },
		{ 9,0,0,0,0,0,0,0,0,0,0,0,0,0,9, },
		{ 9,0,0,0,0,0,0,0,0,0,0,0,0,0,9, },
		{ 9,9,9,9,9,9,9,9,9,9,9,9,9,9,9, },
	};
	Player_one Zhangsan;
	Zhangsan.DingWei_one(a);
	Player_two Lisi;
	Show_Player_one Map1;
	Show_Player_two Map2;
	while (1)
	{
		while (1)
		{
			Map1.show(a);
			char c = _getch();
			if (c == 'j')
			{
				Zhangsan.Move(a, c);
				system("cls");
				if (Zhangsan.Cleck_Hang(a) == 1 || Zhangsan.Cleck_Lie(a) == 1 || Zhangsan.Cleck_Xie_one(a) == 1 || Zhangsan.Cleck_Xie_two(a) == 1)
				{
					cout << "一号获胜";
					system("pause");
					return 0; 
				}
				break;
			}
			else
			{
				Zhangsan.Move(a, c);
				system("cls");
			}
		}
		Lisi.DingWei(a);
		while (1)
		{
			Map2.show(a);
			char c = _getch();
			if (c == 'k')
			{
				Lisi.Move(a, c);
				system("cls");
				if (Lisi.Cleck_Hang(a) == 1 || Lisi.Cleck_Lie(a) == 1 || Lisi.Cleck_Xie_one(a) == 1 || Lisi.Cleck_Xie_two(a) == 1)
				{
					cout << "二号获胜";
					system("pause");
					return 0; 
				}
				break;
			}
			else
			{
				Lisi.Move(a, c);
				system("cls");
			}
		}
		Zhangsan.DingWei_two(a);
	}
	system("pause");
}
