#include<iostream>
using namespace std;
int main()
{
	int i;
	int arr[5];
	cout<<"\n Enter 5 values in array";
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
//	arr[0]=10;
//	arr[1]=3;
//	arr[2]=4;
//	arr[3]=5;
//	arr[4]=19;
   for(i=0;i<5;i++)
   {
   	cout<<"\n"<<arr[i];
   }
//	cout<<"\n"<<arr[0];
//	cout<<"\n"<<arr[1];
//	cout<<"\n"<<arr[2];
//	cout<<"\n"<<arr[3];
//	cout<<"\n"<<arr[4];
	int sum=0;
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"\n sum of an array is "<<sum;
	int max=arr[0];
	for(i=0;i<5;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	cout<<"\n Max element from an arrays is "<<max;
	return 0;
}