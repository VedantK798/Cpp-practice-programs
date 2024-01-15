#include<iostream>
using namespace std;
int main()
{
   int k,i,j;
   for(i=1;i<=5;i++)
    {
       for (k=i;k<5;k++)
       cout<<" ";
       for(j=1;j<=(2*5-1);j++)
       {
            if(i==5||j==1||j==2*i-1)
            cout<<"*";
            else
            cout<<" ";
       }
        cout<<"\n";
    }
    return 0;
}