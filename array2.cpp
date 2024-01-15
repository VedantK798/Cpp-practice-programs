#include<iostream>
using namespace std;
int main ()
{
	int i;
	int arr[5];
	cout<<"\n Enter 5 vales in array";
	for(i=0;i<5;i++)
{
  cin>>arr[i];
}
   int min=arr[0];
   for (i=0;i<5;i++)
   {
   	if(min>arr[i])
   	{
   		min=arr[i];
   		
	   }
	   
   }
   cout <<"\n Min element from array is"<<min;
}
   