#include<iostream>
using namespace std;
class TestClass
{
  public:
  	int x=0;
  	int y=0;
  	
  	void add(int x,int y)
	{
		int z=x+y;
		cout<<"\n sum of two int variable is "<<z;	
	}
	void add(float x, float y)
	{
		float z=x+y;
		cout<<"\n sum of two float variable is "<<z;
	}
	void add(int x,float y){
		float z=x+y;
		cout<<"\n sum of one int and one float is "<<z;
	}
	void add(int x,int y, int z)
	 {
	 	
	 }
	
};
int main()
{
	TestClass o;
	float p;
	float q;
	cout<<"\n Enter value for p ";
	cin>>p;
	cout<<"\n Enter value for q ";
	cin>>q;
	o.add(p,q);
//	o.add(10,2.2);
//	o.add(10,10);
//	o.add()
	
	return 0;
}