#include <iostream>
using namespace std;
class test
{
	public:
		int flightno;
		char destination[20];
		float distance,fuel;
		void feedinfo()
		{
			cout<<" Flight No. : ";
			cin>>flightno;
			cout<<"\n Destination : ";
			cin>>destination;
			cout<<"\n distance KM : ";
			cin>>distance;
		}
		void showinto()
		{
			cout<<"\n ---------------------------------";
			cout<<"\n flight no. :"<<flightno;
			cout<<"\n destination : "<<destination;
			cout<<"\n ---------------------------------";
		    cout<<"\n Distance : "<<distance;
		    if (distance<=1000)
		    {
		    	cout<<"\n fuel required 500L";
			}
			if ((distance>1000)&&(distance<=2000))
			{
				cout<<"\n fuel required 1100L";
			}
			if (distance>2000)
			{
				cout<<"\n fuel required 2200L";
			}
		}
		
};
int main()
{
	test t;
	t.feedinfo();
	t.showinto();
}