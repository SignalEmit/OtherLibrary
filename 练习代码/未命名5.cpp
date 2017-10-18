#include<iostream>
using namespace std;
class stack
{
	private:
		int size;
		T *elem;
		int top;
	public:
		stack(int maxsize,int o)
		{
			size=maxsize;
			elem=new T(o);
			top=-1;
			for(int i=0;i<o;i++)
				cin>>elem[i];
		}
		~stack()
		{
			delete elem;
		}
		A()
		push(T&item)
		{
			if(top=size-1)
				{cout<<"Õ»ÂúÎÞ·¨Ñ¹Èë"<<endl;
				exit(0); 
				}
			top++;
			elem[top]=item; 
		}
		show()
		{
			for(int i=0;i<o+1;i++)
				cout<<elem[i]<<" ";
		}
 } ;
 int main()
 {
 	stack<int> l(15,5);
	 for(int p=1;p<5;p++)
	 l.push() 
	 
 }
