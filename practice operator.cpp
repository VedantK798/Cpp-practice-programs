#include <iostream>
using namespace std;
class Internet
{
	public :
		int x=0;
		int y=0;
		int r=0;
		int s=0;
		Internet(int x,int y)
		{
			this->x=x;
			this->y=y;
		}
		void sum(Internet t1,Internet t2)
		{
			 r=t1.x+t2.x;
			 s=t1.y+t2.y;
			
		}
		void printData()
		{
			cout<<"\n p is "<<r;
			cout<<"\n q is "<<s;
		}	
};
int main()
{
	Internet i(0,0);
	Internet c1(23,24),c2(45,45);
	i.sum(c1,c2);
	i.printData();
	return 0;
}
