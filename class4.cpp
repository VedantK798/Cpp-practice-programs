#include<iostream>
using namespace std;
class batsman
{
		public:
		float batavg,innings,notout,runs;
		char bname[10];
		void readdata()
        {
        	cout<<" Enter player name :";
        	cin>>bname;
	        cout<<"\n No. of innings played : ";
	        cin>>innings;
	        cout<<"\n No. of notout player : ";
	        cin>>notout;
	        cout<<"\n Total runs : ";
	        cin>>runs;
        }
        void calcavg()
        {
        	batavg=runs/(innings-notout);
		}
		void displaydata()
		{
			cout<<"\n Name : "<<bname;
			cout<<"\n ---------------------------------";
			cout<<"\n innings played : "<<innings;
			cout<<"\n player notout  : "<<notout;
			cout<<"\n total runs     : "<<runs;
			cout<<"\n ---------------------------------";
			cout<<"\n batting average: "<<batavg;
		}
};
int main()
{
	batsman t;
	t.readdata();
	t.calcavg();
	t.displaydata();
}