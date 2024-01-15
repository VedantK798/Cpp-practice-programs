#include<iostream>
using namespace std;
int main()
{
	int i,j,k,a;
	for(i=0;i<=5;i++)
	{
		for(k=1;k<=5-i;k++)
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
	return 0;
}