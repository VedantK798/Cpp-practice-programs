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
class b :public a
{
	public : 
	    void fun1()
	    {
	        cout<<"hello world";                            	
		}
};
int main()
{
	b obj;
	obj.fun1();
	return 0;
}