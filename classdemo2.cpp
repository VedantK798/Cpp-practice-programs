#include<iostream>
using namespace std;
class Test
{
	public:
	int x=0;// member variable
	int y=0;// member variable
	Test(int x,int y)
	{
		this->x=x;
		this->y=y;
		
	}
//	void setData(int x,int y) // it is used to initalize/ change the value of x and y 
//	{
//  		this->x=x;
//		this->y=y;
//	}
	void printData()//it is used to print the values of x and y
	{
		cout<<"\n x is "<<x;
		cout<<"\n y is "<<y;
	}
	
	
};
int main()
{
	Test t(10,20);
  
//	t.setData(10,20);
	t.printData();
	return 0;
}