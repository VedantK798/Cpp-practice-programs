#include <iostream>
using namespace std;
class bankaccount
{
	public:
		int accountno;
		float balance,z ;
	    bankaccount(int x,float y)
	    {
	    	accountno=x;
	    	balance=y;
		}
		void getaccountnumber()
		{
			cout<<"\n Your account no. : "<<accountno;
		}
		void getbalance()
		{
			cout<<"\n Your available balance : "<<balance;
		}
		void withdraw()
		{
			float r;
			cout<<"\n Amount you want to withdraw : ";
			cin>>r;
			z=balance-r;
			cout<<"\n Remaining balance : "<<z;
		}
		void deposit()
		{
			float p,q;
			cout<<"\n Intput amount to deposit : ";
			cin>>p;
			q=z+p;
			cout<<"\n Remaining balance : "<<q;
			
		}
};
int main()
{
	bankaccount o(100234,14539.64f);
	o.getaccountnumber();
	o.getbalance();
	o.withdraw();
	o.deposit();
	return 0;
}