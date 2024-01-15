#include<iostream>
using namespace std;
class Complex
{
	public:
		int x=0;
		int y=0;
		int r=0;
		int s=0;
		Complex(int x,int y)
		{
			this->x=x;
			this->y=y;
		}
		void sum(Complex t1,Complex t2)
		{
			 r=t1.x+t2.x;
			 s=t1.y+t2.y;
			
		}
		void printData()
		{
			cout<<"\n x is "<<r;
			cout<<"\n y is "<<s;
		}
	
};
int main()
{
	Complex c(0,0);
	Complex c1(10,20),c2(30,40);
//	Complex result=c1+c2;
	c.sum(c1,c2);
	c.printData();
//	c2.printData();
	return 0;
}
