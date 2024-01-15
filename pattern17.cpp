#include <iostream>
using namespace std;
int main()
{
 int i,j;
 char a=97;
 for(i=1;i<=5;i++)
    {
    for(j=1;j<=i;j++)
        {
            cout<<" "<<a;
			             
			++a;
        }
        cout<<endl;
     }
  return 0;
}