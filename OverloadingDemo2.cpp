#include<iostream>
using namespace std;
class TestClass2
{
	public:
	TestClass2()
	{
		cout<<"\n Default constructor";
	}
	TestClass2(int x)
	{
		cout<<"\n Constructor with int parameter "<<x;
	}
	TestClass2(float x)
	{
		cout<<"\n Constructor with float parameter "<<x;
	}
	TestClass2(int x, float y)
	{
		cout<<"\n Constructor with int and float parameter "<<x<<" "<<y;
	}
};
int main()
{
	TestClass2 o1;
	TestClass2 o2(10);
	TestClass2 o3(5.6f);
	TestClass2 o4(5,7.3f);
	return 0;
}