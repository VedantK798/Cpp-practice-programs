#include <iostream>
using namespace std;
int p,q,r;
int main()
{
	cout<<"enter 3 numbers : ";
	cin>>p;
	cin>>q;
	cin>>r;
	if ((p>=q)&&(p>=r))
	{
		cout<<"it is an largest no. : "<<p;
	}
	if ((q>=p)&&(q>=r))
	{
		cout<<"it is an largest no. : "<<q;
	}
	if ((r>=p)&&(r>=q))
	{
		cout<<"it is an largest no. : "<<r;
	}
}