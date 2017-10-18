#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	long n=0;
	clock_t star,end;
	star=clock();
	while(n<12000)
	{n++;
	cout<<n<<endl;
	}
	
	end=clock();
	cout<<(end-star)/CLOCKS_PER_SEC<<endl;
	}

