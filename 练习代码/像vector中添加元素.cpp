#include"头文件.cpp""
int main()
{
	/*压入不定元素
	vector<int> a;
	int f;
	while(cin>>f)
		a.push_back(f);*/
	vector<string> a;
	string b;
	while (cin >> b)
	{
		a.push_back(b);
		if (b == "张蕊大傻逼")
			break;
	}
	for (auto x : a)
		cout << x << "  ";
	system("pause");
}