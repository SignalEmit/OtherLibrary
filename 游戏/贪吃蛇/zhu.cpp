#include"Head.cpp"
void Fangshanshuo()
{
	HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { 0,0 };
	SetConsoleCursorPosition(hout, pos);
}
void Zuidahua() {

	HWND hwnd = GetForegroundWindow();
	int x = GetSystemMetrics(SM_CXSCREEN) + 300, y = GetSystemMetrics(SM_CYSCREEN) + 300;
	char setting[30];
	sprintf_s(setting, "mode con:cols=%d lines=%d", x, y);//���ÿ���̨��������
	system(setting);

	SetWindowPos(hwnd, HWND_TOPMOST, 0, 0, x + 300, y + 300, NULL);//�ö�


	MoveWindow(hwnd, -10, -40, x + 300, y + 300, 1);//�ƶ�
	cout << endl << endl;
}
void Nandu()
{
	system("color fc");
	cout << "\t\t\t\t\t��̰���߿ɷ�Ϊ7���Ѷ�" << endl;
	cout << "\t\t\t\t\t\t1.������" << endl;
	cout << "\t\t\t\t\t\t2.һ���" << endl;
	cout << "\t\t\t\t\t\t3.��ͨ��" << endl;
	cout << "\t\t\t\t\t\t4.��" << endl;
	cout << "\t\t\t\t\t\t5.��΢΢��" << endl;
	cout << "\t\t\t\t\t\t6.һ����" << endl;
	cout << "\t\t\t\t\t\t7.�޵���" << endl;
	cout << "\t\t\t\t\t\t������������Ĭ�ϼ��Ѷ�" << endl;
	cout << "\t\t\t\t\t**************************************" << endl;
	cout << "\t\t\t\t\t****************     *****************" << endl;
	cout << "\t\t\t\t\t*******                      *******" << endl;
	cout << "\t\t\t\t\t*            �밴��ѡ��             *" << endl;
}
void W(lianbiao &s, Snack &w)						//�����������ߵĶ�����������ײ��⣬ʳ���⣬�հ״�������������
{
	if (w.Bang(s.Snack_Head->x - 1, s.Snack_Head->y))
	{
		if (w.Eat_Food(s, s.Snack_Head->x - 1, s.Snack_Head->y))
			;
		else
			w.Move_Up(s, w);
	}
}
void A(lianbiao &s, Snack &w)
{
	if (w.Bang(s.Snack_Head->x, s.Snack_Head->y - 1))
	{
		if (w.Eat_Food(s, s.Snack_Head->x, s.Snack_Head->y - 1))
			;
		else
			w.Move_Left(s, w);
	}
}
void S(lianbiao &s, Snack &w)
{
	if (w.Bang(s.Snack_Head->x + 1, s.Snack_Head->y))
	{
		if (w.Eat_Food(s, s.Snack_Head->x + 1, s.Snack_Head->y))
			;
		else
			w.Move_Down(s, w);
	}
}
void D(lianbiao &s, Snack &w)
{
	if (w.Bang(s.Snack_Head->x, s.Snack_Head->y + 1))
	{
		if (w.Eat_Food(s, s.Snack_Head->x, s.Snack_Head->y + 1))
			;
		else
			w.Move_Right(s, w);
	}
}
int main()
{
	srand(time(NULL));
	Zuidahua();
	Nandu();
	int a;
	cin>>a;
	int nandu;
	switch (a)
	{
	case 1:nandu = 1500; break;
	case 2:nandu = 1000; break;
	case 3:nandu = 800; break;
	case 4:nandu = 500; break;
	case 5:nandu = 300; break;
	case 6:nandu = 100; break;
	case 7:nandu = 50; break;
	default:
		nandu = 500;
	}
	system("cls");
	lianbiao s(Hang / 2, Lie / 2);
	Snack w;
	char c;
	c = 'd';
	w.Suiji_Food();
	w.map();
	while (1)
	{
		Fangshanshuo();
		if (!w.Cleck_Food())
			w.Suiji_Food();
		
		if (w.Time(&c,nandu))
		{

			switch (c)
			{
			case 'w': 
			{
				if (w.Back_Move_Cleck(s, s.Snack_Head->x - 1, s.Snack_Head->y))
					W(s, w);
				else
					w.Move_Down(s, w);
			}; break;
			case 'a':
			{
				if (w.Back_Move_Cleck(s, s.Snack_Head->x, s.Snack_Head->y - 1))
					A(s, w);
				else
					w.Move_Right(s, w);
			}; break;
			case 's':
			{
				if (w.Back_Move_Cleck(s, s.Snack_Head->x + 1, s.Snack_Head->y))
					S(s, w);
				else
					w.Move_Up(s, w);
			}; break;
			case 'd':
			{

				if (w.Back_Move_Cleck(s, s.Snack_Head->x, s.Snack_Head->y + 1))
					D(s, w);
				else
					w.Move_Left(s, w);
			}; break;
			default:
			{
				char Y;
				Y = c;
				if (Y == 'w')
				{
					if (w.Back_Move_Cleck(s, s.Snack_Head->x - 1, s.Snack_Head->y))
						W(s, w);
					else
						w.Move_Down(s, w);
				}
				else if (Y == 'a')
				{
					if (w.Back_Move_Cleck(s, s.Snack_Head->x, s.Snack_Head->y - 1))
						A(s, w);
					else
						w.Move_Right(s, w);
				}
				else if (Y == 's')
				{
					if (w.Back_Move_Cleck(s, s.Snack_Head->x + 1, s.Snack_Head->y))
						S(s, w);
					else
						w.Move_Up(s, w);
				}
				else if (Y == 'd')
				{
					if (w.Back_Move_Cleck(s, s.Snack_Head->x, s.Snack_Head->y + 1))
						D(s, w);
					else
						w.Move_Left(s, w);
				}
			}
			}
		}
		else
		{
			char Y;

			Y = c;
			if (Y == 'w')
			{
				if (w.Back_Move_Cleck(s, s.Snack_Head->x - 1, s.Snack_Head->y))
					W(s, w);
				else
					w.Move_Down(s, w);
			}
			else if (Y == 'a')
			{
				if (w.Back_Move_Cleck(s, s.Snack_Head->x, s.Snack_Head->y - 1))
					A(s, w);
				else
					w.Move_Right(s, w);
			}
			else if (Y == 's')
			{
				if (w.Back_Move_Cleck(s, s.Snack_Head->x + 1, s.Snack_Head->y))
					S(s, w);
				else
					w.Move_Up(s, w);
			}
			else if (Y == 'd')
			{
				if (w.Back_Move_Cleck(s, s.Snack_Head->x, s.Snack_Head->y + 1))
					D(s, w);
				else
					w.Move_Left(s, w);
			}
		}
		w.Duqu(s);
		w.map();

	}
}