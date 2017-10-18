#include <iostream>
using namespace std;
class cpoint
{public:
	cpoint(){
	}
	~cpoint(){
	}
	cpoint(float x1,float x2);
	void move(float x1,float x2);
	float x;
	float y;
};
cpoint::cpoint(float x1,float x2)
{	
	x=x1;
	y=x1;
}
void cpoint::move(float x1,float x2)
{	
	x=x1;
	y=x1;
}


int main(int argc, char** argv) {
	cpoint *p=new cpoint[5];
	for(int i=0;i<5;i++)
		p[i].move(i,i);
	for(int i=0;i<5;i++)
		cout<<p[i].x<<","<<p[i].y<<endl;
	return 0;
}
