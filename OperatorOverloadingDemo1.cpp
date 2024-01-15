#include<iostream>
using namespace std;

class Complex
{
	public:
		int x=0;
		int y=0;
		
		void setData(int x,int y)
		{
			this->x=x;
			this->y=y;
		}
		void printData()
		{
			cout<<"\n x is "<<x;
			cout<<"\n y is "<<y;
		}
		Complex operator+(Complex t2)
		{
			Complex temp;
			temp.x=this->x+t2.x;
			temp.y=this->y+t2.y;
			return temp;
		}
};
int main()
{
	Complex c1,c2,c3;
	c1.setData(3,4);
	c2.setData(6,7);
	c1.printData();
	c2.printData();
	c3=c1+c2;// c1 is calling operator and c2 is passed as parameter into the function(called)// c1.operator+(c2)
	c3.printData();
	return 0;
	
}

