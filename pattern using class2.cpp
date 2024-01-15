#include <iostream>
using namespace std;
class pattern
{
	public:
		void print(int r)
		{
			int i,j,k,a;
	        for(i=0;i<=r;i++)
	        {
		        for(k=1;k<=r-i;k++)
			    cout<<" ";
		        for(j=0;j<=i;j++)
		        {
			        if ((j==0) || (i==0))
			        a=1;
			        else
			        a=a*(i-j+1)/j;
			        cout<<a<<" ";
		        }	
		        cout<<"\n";
	        }
		}
};
int main()
{
	int x;
	cout<<"enter rows : ";
	cin>>x;
	pattern obj;
	obj.print(x);
	return 0;
}