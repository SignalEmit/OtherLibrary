#include<iostream>
#include<conio.h>
#include<Windows.h>
using namespace std;
class HurryBox
{
public:
	int x;
	int y;
public:
	void Chu(int b[5][5]);
	void show(int b[5][5]);
	void Cleck(int b[5][5]);
};
void HurryBox::show(int b[5][5])
{
	while (1)
	{
		system("cls");
		HurryBox::Chu(b);
		HurryBox::Cleck(b);
		Sleep(500);
		char c = getche();
		switch (c)
		{
		case 'a': {
			if (b[x][y - 1] != 1 && b[x][y - 1] != 2 && b[x][y - 1] != 5)
			{
				b[x][y] = 0;
				b[x][y - 1] = 4;
			}
			else if(b[x][y - 1] == 2)
			{
				if (b[x][y - 2] == 5)
					b[x][y - 2] = 9;
				else if (b[x][y - 2] == 0)
				{
					b[x][y - 2] = 2;
					b[x][y - 1] = 4;
					b[x][y] = 0;
				}
			}}; break;
		case 's': {if (b[x + 1][y] != 1 && b[x + 1][y] != 2 && b[x + 1][y] != 5)
		{
			b[x][y] = 0;
			b[x + 1][y] = 4;
		}
				  else if(b[x + 1][y] == 2)
				  {
					  if (b[x + 2][y] == 5)
						  b[x + 2][y] = 9;
					  else if (b[x + 2][y] == 0)
					  {
						  b[x + 2][y] = 2;
						  b[x + 1][y] = 4;
						  b[x][y] = 0;
					  }
				  }}; break;
		case 'd': {if (b[x][y + 1] != 1 && b[x][y + 1] != 2 && b[x][y + 1] != 5)
		{
			b[x][y] = 0;
			b[x][y + 1] = 4;
		}
				  else if(b[x][y + 1] == 2)
				  {
					  if (b[x][y + 2] == 5)
						  b[x][y + 2] = 9;
					  else if (b[x][y + 2] == 0)
					  {
						  b[x][y + 2] = 2;
						  b[x][y + 1] = 4;
						  b[x][y] = 0;
					  }
				  }}; break;
		case 'w': {if (b[x - 1][y] != 1 && b[x - 1][y] != 2 && b[x - 1][y] != 5)
		{
			b[x][y] = 0;
			b[x - 1][y] = 4;
		}
				  else if(b[x - 1][y] == 2)
				  {
					  if (b[x - 2][y] == 5)
						  b[x - 2][y] = 9;
					  else if (b[x - 2][y] == 0)
					  {
						  b[x - 2][y] = 2;
						  b[x - 1][y] = 4;
						  b[x][y] = 0;
					  }
				  }

		}; break;
			}
}
}
void HurryBox::Cleck(int b[5][5])
{
	for (int x_a = 0; x_a != 5; x_a++)
		for (int y_b = 0; y_b != 5; y_b++)
			if (b[x_a][y_b] == 4)
			{
				x = x_a;
				y = y_b;
				break;
			}
}
void HurryBox::Chu(int b[5][5])
{
	for (int x_a = 0; x_a != 5; x_a++)
	{
		for (int y_b = 0; y_b!= 5; y_b++)
		{
			switch (b[x_a][y_b])
			{
			case 0:cout << "  "; break;
			case 1:cout << "¨~"; break;
			case 2:cout << "¡î"; break; 
			case 4:cout << "¡â"; break;
			case 5:cout << "¡ò"; break;
			case 9:cout << "ÄãÓ®ÁË";
			}
		}
		cout << endl;
	}
}
	int main()
	{
		int a[5][5] =
		{
			{ 1,1,1,1,1 },
			{ 1,0,0,0,1 },
			{ 1,5,2,0,1 },
			{ 1,0,0,4,1 },
			{ 1,1,1,1,1 },
		};
		HurryBox s;
		s.Chu(a);
		s.show(a);
		system("pause");
	}
	
