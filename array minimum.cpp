#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<" Enter 5 numbers : ";
    for (int i=0;i<5;i++)
    {
    	cout<<"\n Enter number : ";
    	cin>>arr[i];
	}
	 int min = arr[0];
    for (int i = 1; i < 5; i++) 
	{
        if (arr[i] < min) 
		{
            min = arr[i];
        }
    }
     cout<<"\n minimum no : "<<min;
 }
    