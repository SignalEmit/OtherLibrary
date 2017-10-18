#include<iostream>
using namespace std;
template<class T>
struct A
{
	A<T> *next;
	T data;
	A()
	{
		data = 0;
		next = NULL;
	}
	A(T n, A<T> *l = NULL)
	{
		data = n;
		next = l;
	}
	A(const T &n)
	{
		data = n;
	}
};
template<class T>
class linklist
{
private:
	A<T> *head;
public:
	linklist()
	{
		head = new A<T>();
	}
	void weicha(const T& p)
	{
		A<T> *s, *r;
		if (p != 0)
		{
			s = new A<T>(p);
			r->next = s;
			r = s;

		}
		else
			r->next = NULL;

	}
	void show()
	{
		A<T> *p;
		p = head->next;
		while (p != NULL)
		{
			cout << p->data << "   ";
			p = p->next;
		}
	}
};
int main()
{
	linklist<int> l;
	int c;
	for (int i = 0; i < 10; i++)
	{
		cin >> c;
		l.weicha(c);
	}
	system("pause");

}
