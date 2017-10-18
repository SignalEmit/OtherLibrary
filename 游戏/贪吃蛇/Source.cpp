#include"Head.cpp"
void lianbiao::Push_lianbiao(int a, int X, int Y)				//���������Ԫ��
{
	Jiedian *p;													//�����ڵ�p
	p = new Jiedian(a, X, Y, Snack_Head->next);					//���ڵ�p��ֵ
	Snack_Head->next = p;
}
void lianbiao::Back(int k)										//����������һ�����ͷŵ�
{
	Jiedian *p;
	p = Snack_Head->next;										//��ջ
	int i=1;
		if (k == 1)
		{
			last_x = p->x;
			last_y =p->y ;
			Snack_Head->next = NULL;
		}
	else
	{
		while (p != NULL&&i < k - 1)
		{
			p = p->next;
			i++;
		}
		Jiedian *q;
		q = p;
		p = p->next;
		last_x = p->x;
		last_y = p->y;
		q->next = NULL;
	}
	
}
Snack::Snack()															//��ʼ���ߵ����ж���
{
	for (int i = 0; i != Hang; i++)
		for (int o = 0; o != Lie; o++)	
			if (i == 0 || o == 0 || i == Hang - 1 || o == Lie - 1)		
				snack[i][o] = WALL;										//��ʼ��ǽ	
			else
				snack[i][o] = Kongbai;									//��ʼ���հ״�
	snack_head_x = Hang / 2;
	snack_head_y = Lie / 2;
	snack[snack_head_x][snack_head_y] = She_tou;						//��ʼ����ͷ
	i = 0;																//��ʼ���ߵ�����
}
void Snack::map()
{
	system("color fc");
	cout << "\t\t\t\t\t******************************̰����****************************"<<endl;
	cout << "\t\t\t\t\t****************************************************************" << endl;
	cout << "\t\t\t\t\t****************************************************************" << endl;
	cout << "\t\t\t\t\t****************************************************************" << endl;
	cout << "\t\t\t\t\t\t\t\t    �����߰�w" << endl;
	cout << "\t\t\t\t\t\t\t\t    �����߰�s" << endl;
	cout << "\t\t\t\t\t\t\t\t    �����߰�a" << endl;
	cout << "\t\t\t\t\t\t\t\t    �����߰�d" << endl;
	for (int i = 0; i != Hang; i++)
	{
		cout << "\t\t\t\t\t\t\t";
		for (int o = 0; o != Lie; o++)
			switch (snack[i][o])
			{
			case WALL:cout << "��"; break;								//ǽ
			case Kongbai:cout << "  "; break;							//�հ�
			case She_tou:cout << "��"; break;							//��ͷ
			case Food:cout << "��"; break;								//ʳ��
			case She_shen:cout << "��"; break;							//����
			}
		cout << endl;
	}
}
void Snack::Suiji_Food()								//�����ʳ��
{
	while (1)
	{
	Food_x = rand() % (Hang - 1) + 1;
	Food_y = rand() % (Lie - 1) + 1;
	if (snack[Food_x][Food_y] != She_tou&& snack[Food_x][Food_y] != She_shen&&snack[Food_x][Food_y]!=WALL)
	{
		snack[Food_x][Food_y] = Food;
		break;
	}
}
}
bool Snack::Cleck_Food()								//����ͼ����û��ʳ���еĻ�����1��û�еĻ�����0
{
	for (int i = 0; i != Hang; i++)
		for (int o = 0; o != Lie; o++)
			if (snack[i][o] == Food)
				return 1;
	return 0;
}
bool Snack::Eat_Food(lianbiao &s,int x,int y)			//��⵱��Ե�ʳ���ʱ���������� ����1����û�Ե�ʳ�ﷵ��0
{
	if (snack[x][y] == Food)							//�����ʳ��Ļ�
	{
		i++;											//�����ȼ�1	
		s.Push_lianbiao(She_shen, snack_head_x, snack_head_y);						//����
		s.Snack_Head->x = x;							//������ͷ��x����
		s.Snack_Head->y = y;							//������ͷ��y����
		snack_head_x = x;								//���±�����ͷ������
		snack_head_y = y;								//���±�����ͷ������
		return 1;
	}
	else
		return 0;
}
bool Snack::Bang(int x,int y)												//������ͷ����һ�������������һ��������ǽ������������ô��Ϸ����
{
	if (snack[x][y] == WALL || snack[x][y] == She_shen)
	{
		system("cls");
		cout << "*******************************************" << endl;
		cout << "*******************************************" << endl;
		cout << "*******************************************" << endl;
		cout << "*******************************************" << endl;
		cout << "*******************************************" << endl;
		cout << "*******************��Ϸ����****************" << endl;
		cout << "*******************************************" << endl;
		cout << "*******************************************" << endl;
		cout << "*******************************************" << endl;
		cout << "*******************************************" << endl;
		cout << "*******************************************" << endl;
		cout << "*******************************************" << endl;
		system("pause");
		exit(0);
	}
	else
		return 1;
}
bool Snack::Time(char *c,int nandu)												//��ʱ��+���Ƽ�������Ķ���
{
	clock_t star, end;
	star = clock();
	while (!_kbhit())											//�������
	{
		end = clock();
		if ((end - star) >= nandu)
		{
			return 0;
		}
}
	while (1)													//��֤�Ͱ������ͬʱ����
	{
		end = clock();
		if ((end - star) >= nandu)
			break;
	}
	*c = _getch();
	int k;
	while (1)										//���_getch()�������ĺ���  ����ѽ
	{
		if (_kbhit())
		{
			k = _getch();
			if (0 == k || 0xE0 == k)
				k = k << 8 | _getch();
		}
		else break;
	}
	return 1;
	}
void Snack::Move_Up(lianbiao &s, Snack &w)											//�����ƶ�����
{
	w.GOGO(s, s.Snack_Head->x - 1, s.Snack_Head->y);							
}
void Snack::Move_Left(lianbiao &s, Snack &w)								//�����ƶ�
{
	w.GOGO(s, s.Snack_Head->x , s.Snack_Head->y-1);
}
void Snack::Move_Down(lianbiao &s, Snack &w)							//�����ƶ�
{
	w.GOGO(s, s.Snack_Head->x + 1, s.Snack_Head->y);
}
void Snack::Move_Right(lianbiao &s,Snack &w)						//�����ƶ�
{
	w.GOGO(s, s.Snack_Head->x , s.Snack_Head->y+1);
}
bool Snack::Back_Move_Cleck(lianbiao &s,int a,int b)					//��������Ҫ�ߵ���һ�������λ�������������Ѿ�������������������ͨfan0��������ڷ�0�������ڷ�1
{
	Jiedian *p;
	p = s.Snack_Head->next;
	if (p != NULL)
	{
		if (a == p->x&&b == p->y)
			return 0;
		else
			return 1;
	}
	else
		return 1;
}
void Snack::Duqu(lianbiao s)									//��ȡ�����е�Ԫ�ض������Ԫ�����¸�ֵ
{
	snack[s.Snack_Head->x][s.Snack_Head->y] = She_tou;
	Jiedian *p;
	p = s.Snack_Head->next;
	while (p != NULL)
	{
		snack[p->x][p->y] = She_shen;
		p = p->next;
	}
}
void Snack::GOGO(lianbiao &s, int x, int y)			//����ͬһ�������ƶ�û�й���
{
	s.Snack_Head->x = x;
	s.Snack_Head->y = y;
	s.Push_lianbiao(She_shen, snack_head_x , snack_head_y);
	s.Back(i+1);
	snack_head_x = x;
	snack_head_y = y;
	snack[s.last_x][s.last_y] = Kongbai;
}
