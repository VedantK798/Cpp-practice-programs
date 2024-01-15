#include <iostream>
using namespace std;
class a
{
	public :
		void fun1()
		{
			cout<<"\n Prathamesh";
		}
};
class b
{
	public : 
	    void fun2()
	    {
	     cout<<"\n Kiran";                               	
		}
};
int main()
{
	a obj1;
	obj1.fun1();
	b obj2;
	obj2.fun2();
	return 0;
}