#include"ͷ�ļ�.cpp""
int main()
{
	/*ѹ�벻��Ԫ��
	vector<int> a;
	int f;
	while(cin>>f)
		a.push_back(f);*/
	vector<string> a;
	string b;
	while (cin >> b)
	{
		a.push_back(b);
		if (b == "�����ɵ��")
			break;
	}
	for (auto x : a)
		cout << x << "  ";
	system("pause");
}