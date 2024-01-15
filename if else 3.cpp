 #include <iostream>
using namespace std;
int a;
int main()
{
	cout<<"enter percentage : ";
	cin>>a;
	if ((a>=90)&&(a<=100))
	{
		cout<<"It's A grade";
	}
	 if ((a>=80)&&(a<=89))
	{
		cout<<"It's B grade";
	}
		if  ((a>=70)&&(a<=79))
	{
		cout<<"It's C grade";
	}
		if ((a>=60)&&(a<=69))
	{
		cout<<"It's D grade";
	}
		if ((a>=1)&&(a<=59))
	{
		cout<<"It's f grade";
	}
}