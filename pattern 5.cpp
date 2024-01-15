#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<=i;j++)
		{
		    cout<<"*";		
		}
		cout<<"\n";	
	}
	for(i=2;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			cout<<"*";	
		}
		cout<<"\n";
		
	}
	return 0;
}