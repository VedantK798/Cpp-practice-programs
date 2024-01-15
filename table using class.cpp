#include <iostream>
using namespace std;
class table
{
	public:
		void print(int k)
		{
			for (int i=1;i<=10;++i) 
			{
                int a =k*i;
                cout<<k<<"x"<<i<<"="<<a<<endl;
		    }
		}
};
int main()
{
	int x;
	cout<<"enter number to print table : ";
	cin>>x;
	table obj;
	obj.print(x);
	return 0;
}