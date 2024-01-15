#include<iostream>
using namespace std;
int main()
{
	int i,j,k,a=0;
	for(i=0;i<=5;i++)
	{
		for(k=5;k>i;k--)
			cout<<" ";
		for(j=0;j<i;j++)
			cout<<a<<" ";
			a++;	
		cout<<"\n";
	}	
	return 0;
}