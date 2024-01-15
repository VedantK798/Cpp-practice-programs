#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"\n A Constructor";
		}
		A(int x)
		{
			cout<<"\n A constructor with int parameter "<<x;
		}
		void fun1()
		{
			cout<<"\n Vedant";
		}
};
class B:public A
{
	public:
		B()
		{
			cout<<"\n B Constructor";
		}
		B(int y):A(20)
		{
			
			cout<<"\n B constructor with int parameter "<<y;
		}
		void fun1()
		{
			cout<<"\n Milind";
		}
		void fun2()
		{
			cout<<"\n Vishal";
		}
	
};
int main()
{
	
	B obj2;
	B obj3(10);
	obj2.fun1();
	obj2.fun2();
	return 0;
}