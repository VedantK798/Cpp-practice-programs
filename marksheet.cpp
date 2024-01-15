#include <iostream>
#include <string>
using namespace std;
char a[10],b;
float p,q,r,s,t,x,y,z;
int main()
{
	  cout<<"  * * * Marksheet * * *  ";
	  cout<<"\n";
	  cout<<"School name :"; cin>>a; 
	  cout<<"Div = "; 
	  cin>>b;
	  cout<<"\n";
	  cout<<"Subject"; cout<<"\t"; cout<<"Marks"; 	
	  cout<<"\n";
      cout<<"maths : ";
	  cin>>p;
	  cout<<"\t"<<"100";
	  cout<<"\n";
	  cout<<"English : ";
	  cin>>q;
	  cout<<"\t"<<"100";
	  cout<<"\n";
	  cout<<"chemisty : ";
	  cin>>r;
	  cout<<"\t"<<"100";
	  cout<<"\n";
	  cout<<"physics : ";
	  cin>>s;
	  cout<<"\t"<<"100";
	  cout<<"\n";
	  cout<<"computer science : ";
	  cin>>t;	
	  cout<<"\t"<<"200";
	  cout<<"\n";
	  x=p+q+r+s+t;
	  cout<<"Total marks : "<<x<<"/600";
	  y=x/600*100;
	  cout<<"\n";
	  cout<<" marks in percentage : "<<y;
	  cout<<"\n";
	  if ((y>=80)&&(y=100))
	 {
		cout<<"It's A grade";
	 }
	 if ((y>=70)&&(y<=79))
	 {
		cout<<"It's B grade";
	 }
		if  ((y>=60)&&(y<=69))
	 {
		cout<<"It's C grade";
	 }
		if ((y>=50)&&(y<=59))
	 {
		cout<<"It's D grade";
	 }
		if ((y>=1)&&(y<=49))
	 {
		cout<<"It's f grade";
	 }
}