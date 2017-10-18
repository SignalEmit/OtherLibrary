#include <iostream>
using namespace std;
class student
{public:
	int num;
	int score;

	student(int,int);
	void show();
	
};
student::student(int n,int s)
{num=n;
score=s;
}
void student::show()
{cout<<num<<"\t"<<score<<endl;

}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	student stud(1,100);
	
 
	student *p=&stud;
	cout<<"*p.num"<<(*p).num<<endl;
	cout<<"p->score"<<p->score<<endl;
	(*p).show();
	p->show(); 
	return 0;
}
