#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(k=1;k<i;k++)
			cout<<" ";
		for(j=i;j<=5;j++)
			cout<<" *";	
		cout<<"\n";
	}	
	return 0;
}