#include <iostream>
using namespace std;
class vehicle
{
 	public :
 		void startengine()
 		{
 			cout<<"\n Engine Started.";
		}
};
class car : public vehicle
{
	public :
		void startengine()
		{
			vehicle :: startengine();
			cout<<"\n Car Engine Started.";
		}
};
class motorcycle : public car
{
	public :
		void startengine()
		{
			car :: startengine();
			cout<<"\n Motorcycle Engine start.";
		}
};
int main()
{
	motorcycle a;
	a.startengine();
	return 0;
}

