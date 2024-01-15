#include<iostream>
using namespace std;

class A
{

  public:
  	int x=10;
  void fun1()
  {
  	cout<<"\n Fun1";
  }
  	
};
class B
{
	public:
		int x=20;
	void fun1()
	{
		cout<<"\n Fun2";
		}	
};
class C:public A, public B
{
   public:
   void fun3()
   {
   	cout<<"\n Fun3";
	   }
};

int main()
{
	C obj;
	obj.B::fun1();
//	obj.fun2();
	obj.fun3();
	cout<<"\n x is "<<obj.A::x;
//	cout<<"\n y is "<<obj.y;
	return 0;
}