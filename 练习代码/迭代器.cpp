#include"м╥нд╪Ч.cpp"
int main()
{
	string s{ "zxc dgdg" };
	if (s.begin() != s.end())
	{
		auto c = s.begin();
		*c = toupper(*c);
	}
	cout << s;
	system("pause");
}