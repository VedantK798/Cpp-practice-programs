#include <iostream>
using namespace std;
class student
{
	public :
		int admno;
		float eng,maths,science,total;
		student()
		{
			cout<<" Your admin mumber : ";
			cin>>admno;
			cout<<"\n Enter marks scored in english : ";
			cin>>eng;
			cout<<"\n Enter marks scored in maths : ";
			cin>>maths;
			cout<<"\n Enter marks scored in science : ";
			cin>>science;
		}
		void ctotal()
		{
			total=eng+maths+science;
		}
		void showdata()
		{
			cout<<"\n---------------------------------";
			cout<<"\n            Marksheet            ";
			cout<<"\n---------------------------------";
			cout<<"\n English "<<eng<<" / "<<"100";
			cout<<"\n Maths   "<<maths<<" / "<<"100";
			cout<<"\n science "<<science<<" / "<<"100";
			cout<<"\n---------------------------------";
			cout<<"\n TOTAL MARKS = "<<total<<" / "<<"300";
			cout<<"\n---------------------------------";
		}
};
int main()
{
	student k;
	k.ctotal();
	k.showdata();
}