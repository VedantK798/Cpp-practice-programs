#include <iostream>
using namespace std;
int i,j=0,k;
int main()
{
 cout<<"enter any 3 dight no. : ";
 cin>>i;
 while (i!=0)
 {
  k=i%10;
  j=j*10+k;
  i/=10;
 }
 cout<<"reverse no. : "<<j;
}