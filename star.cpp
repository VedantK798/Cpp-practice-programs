#include<iostream>
using namespace std;
int main()
{
	int i,j,n,s;
	cout<<"enter a no of row:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(s=i;s<n;s++)
		{
			cout<<"";
		}
		for(j=1;j<=(2*i-1);j++)
		{
			cout<<"*";
		}
		    cout<<"\n"; 
		
	}
}