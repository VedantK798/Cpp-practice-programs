#include <iostream>
#include <math.h>
using namespace std;
class report
{
	public:
		float adno,avg,x;
		char name[20];
		float arr[5];
		void getavg()
		{
		    for (int i=0;i<5;i++)
		    {
		    	avg += arr[i];
		    	x=avg/5;
			}
		}
		void readinfo()
		{
			cout<<"Enter admission no : ";
			cin>>adno;
			cout<<"enter name : ";
			cin>>name;
			cout<<"\n input Your score in 5 subject"<<endl;
		    for (int i=0;i<5;i++)
		    {
		    	cout<< "\n enter no. :"; 
		    	cin>>arr[i];
		    }
		}
		void displayinfo()
		{
			cout<<"\n ---------------------------------";
			cout<<"\n Name : "<<name;
			cout<<"\n Admission no : "<<adno;
			cout<<"\n ---------------------------------";
			cout<<"\n Total marks : "<<avg;
			cout<<"\n avarage : "<<x;
			if (x<50)
			{
				cout<<"\n You are not eligible";
			}
			else
			{
				cout<<"\n You are eligible";
			}
		}
};
int main()
{
	report t;
	t.readinfo();
	t.getavg();                 
	t.displayinfo();
}
