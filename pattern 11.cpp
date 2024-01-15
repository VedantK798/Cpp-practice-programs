#include <iostream>
using namespace std;
int main()
{
	int i,j,a=1,b=6;
	for(i=0;i<4;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<" "<<a;
			++a;	
		}
		cout<<"\n";
		
	}
	for(i=3;i>=0;i--)
	{
		for(j=0;j<i;++j)
		{
			cout<<" "<<b;
			--b;	
		}
		cout<<"\n";
		
	}
	return 0;
}