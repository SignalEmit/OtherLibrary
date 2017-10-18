#include<iostream>
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
	A(T&item)
	{
		data=item;
	}
	A(T&item,A *nextnode=NULL)
	{
		data=item;
		next=nextnode;
	}
 } ;
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
		~linklist(){
			delete head;
		}
		charu();
		show(); 
		find(T k);
		del(T k);
		
 };
 template<class T>
linklist<T>::show()
{
	A<T> *p,*q;
	p=head->next;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	
}
 template<class T>
 linklist<T>::find(T k)
 {
 
	 A<T> *p,*q;
	 p=head;
	 int i;
	 i=0;
	 while(p->next!=NULL&&i<k-1)
	 	{
	 		p=p->next;
	 		i++;
		 }
}
 template<class T>
 linklist<T>::charu()
 {
 	A<T> *p;
 	p=new A<T>();
 	char c;
 	cin>>c;
 	
 	while(c!='!') 	{p->data=c;
	 p->next=head->next;
	 head->next=p;
	 cin>>c;}}
 	int main()
 	{
 		linklist<char> l;
 		
 		l.charu();
 		l.show();
	  } 
