#include <iostream>
using namespace std;
class person
{
	public :
		char name[10]="Vedant";
		int age=18;
	    void displayinfo()
	    {
		    cout<<"\n Name : "<<name;
		    cout<<"\n age : "<<age;
	    }
};
class student : public person
{
	public :
		int studentid=101;
		void displayinfo()
		{
			cout<<" Student ID : "<<studentid;
			person::displayinfo();
		}
};
int main()
{
	student obj;
	obj.displayinfo();
	return 0;
}
