#include<iostream>
using namespace std;
class A
{
	public:
		void fun1()
		{
			cout<<"\n Vedant";
		}
};
class B
{
	public:
		void fun2()
		{
			cout<<"\n Vishal";
		}
	
};
int main()
{
	A obj1;
	B obj2;
	obj1.fun1();
	obj2.fun2();
	return 0;
}