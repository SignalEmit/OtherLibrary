#include <iostream>
using namespace std;
class mai
{
	private:
		int ku;
		int yi;
	public:
		mai(int a,int b)
		{
			ku=a;
			yi=b;
		}
		int pay()
		{	int s;
			if(ku>=yi&&yi>=50)
				s=yi*80+(ku-yi)*45;
				else if(yi>=ku&&ku>=50)
					s=ku*80+(yi-ku)*60;
					else if(yi>=ku&&ku<50)
						s=ku*90+(yi-ku)*60;
							else if(ku>=yi&&yi<50)
								s=yi*90+(ku-yi)*45;
			return s;
							}
					
		};
		


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	mai s(60,70);
	cout<<"ÐèÖ§¸¶Ç®Êý:"<<s.pay()<<endl;
	
	return 0;
}
