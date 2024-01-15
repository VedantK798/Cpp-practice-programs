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
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    sum=sum/5;
     cout<<"\n average no : "<<sum;
 }