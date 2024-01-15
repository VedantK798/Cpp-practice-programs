#include <iostream>
using namespace std;
class book
{
	public:
		int bookno,total;
		char booktitle[50];
		float price=480;
		void input()
		{
			cout<<"\n Number of copies : ";
			cin>>bookno;
			cout<<"\n Name of book : ";
			cin>>booktitle;
		}
		void purchace()
		{
			total=bookno*price;
		}
		void total_cost()
		{
			cout<<"\n---------------------------------";
			cout<<"\n             Recipt              ";
			cout<<"\n---------------------------------";
			cout<<"\n Book : "<<booktitle<<"\n purchase books : "<<bookno<<"\n Price per book : "<<price;
			cout<<"\n---------------------------------";
			cout<<"\n Total cost : "<<total;
		}
};
int main()
{
	book k;
	k.input();
	k.purchace();
	k.total_cost();
}