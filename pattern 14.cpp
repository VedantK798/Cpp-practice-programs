#include<iostream>
using namespace std;
int main()
{
	int i,j,k,a=0,b=4;
	for(i=0;i<=5;i++)
	{
		for(k=5;k>i;k--)
			cout<<" ";
		for(j=0;j<i;j++)
			cout<<a<<" ";
			a++;	
		cout<<"\n";
	}
	for(i=1;i<=4;i++)
	{
		for(k=1;k<i;k++)
		cout<<" ";
		for (j=i;j<=4;j++)
		cout<<" "<<b;
		b--;
		cout<<"\n";
	}
	return 0;
}