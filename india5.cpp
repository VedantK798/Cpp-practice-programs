#include <iostream>
using namespace std;
class employee
{
	public :
		char name[10]="Vikas";
		float salary=69690.9;
		void calculatebounus()
		{
			cout<<"\n Name : "<<name;
			cout<<"\n Monthly salary : "<<salary;
		}
};
class maneger : public employee
{
	public :
		int department=15500;
		void calculatebonus()
		{
			employee::calculatebounus();
			cout<<"\n Highest Bonus than Regular Employee : "<<department;
		}
};
int main()
{
	maneger k;
	k.calculatebonus();
	return 0;
}
