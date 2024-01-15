#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=1;i<=3;i++)
	{
		for(k=1;k<i;k++)
			cout<<" ";
		for(j=i;j<=3;j++)
			cout<<" *";	
		cout<<"\n";
	}
	for(i=2;i<=3;i++)
	{
		for(k=3;k>i;k--)
			cout<<" ";
		for(j=0;j<i;j++)
			cout<<" *";	
		cout<<"\n";
	}	
	return 0;
}