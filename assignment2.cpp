#include <iostream>
using namespace std;
class circle
{
	public:
		float p,a,r;
		circle()
		{
			cout<<"\n Input Radius : ";
			cin>>r;
		}
		void area()
		{
			a=3.14*(r*r);
		}
		void perimeter()
		{
			p=2*3.14*r;
		}
		void display()
		{
			cout<<"\n Radius : "<<r;
			cout<<endl;
			cout<<"\n Area : "<<a;
			cout<<endl;
			cout<<"\n Perimeter :"<<p;
			cout<<endl;
		}
};
int main()
{
	circle p;
	p.area();
	p.perimeter();
	p.display();
	return 0;
}