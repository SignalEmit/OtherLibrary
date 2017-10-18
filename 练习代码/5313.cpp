#include<iostream>
using namespace std;
template<class T>
class linklist
{
	private:
		int length;
		T *elem;
		int maxsize;
	public:
		linklist(int max)
		{
			maxsize=max;
			elem= new T[max];
		}
		int search(int b);
		void shuru(int k);
};
template<class T>
void linklist<T>::shuru(int k)
{	cout<<"输入"<<k<<"个数："<<endl; 
	for(int i=0;i<k;i++)
	 cin>>elem[i];
}
template<class T> 
int linklist<T>::search(int b)
{  int k=-1;
	for(int i=0;i<length;i++)
{
		cout<<elem[i];
	{
			if(elem[i]==b)
			k++;
			if(k==-1)
			 {
			 cout<<"没找到"<<endl;
			 exit(0);}
			 else
			 return k+1;}
		}
main()
{
	linklist<int> s(10);
	s.shuru(6);
	s.search(15);
}
