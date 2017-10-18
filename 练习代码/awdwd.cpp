#include <iostream>
using namespace std;
template<class T>
struct A
{
	T data;
	A<T> *next;
	A()
	{
		next=NULL;
	}
	A(const T& item,A<T> *l=NULL)
	{
		data=item;
		next=l;
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
			head=new A<T>();
		}
		toucha(const T &item)
		{
			A<T> *p;
			p=new A<T>(item,head->next);
			head->next=p;
		}
		weicha(const T& item)
		{
			A<T> *p,*r;
			r=head;
			p=new A<T>(item,NULL);
			r->next=p;
			r=p;
		}
		show()
		{
			A<T> *p;
			p=head->next;
			while(p->next!=NULL)
			{
				cout<<p->data<<" ";
				p=p->next;
			}
		}
};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	linklist<int> l;
	
for(int i=0;i<6;i++)
{int o;
cin>>o;
l.charu(o);
	
}
l.show();
	return 0;
}
