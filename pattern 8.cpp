#include<iostream>
using namespace std;
int main()
{
	int i,j,a=1;
	for(i=0;i<4;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<" "<<a;
			++a;	
		}
		cout<<"\n";
		
	}
	return 0;
}