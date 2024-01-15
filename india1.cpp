#include <iostream>
using namespace std;
class Animal
{
	public :
		void speak()
		{
			cout<<"\n The animal makes a sound.";
		}
};
class dog : public Animal
{
	public :
		void speak()
		{
			cout<<" The dog barks.";
			Animal::speak();
		}
};
int main()
{
	dog obj;
	obj.speak();
	return 0;
}
