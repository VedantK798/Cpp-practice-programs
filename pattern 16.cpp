#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(i=5;i>=1;i--)
    {
        for (k=i;k<5;k++)
        cout<<" ";
        for(j=1;j<=2*i-1;j++)
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