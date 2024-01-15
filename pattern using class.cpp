#include <iostream>
using namespace std;
class turf
{
	public:
		void print(int y)
		{
			for(int i=1;i<=y;i++)
			{
			    for(int k=y;k>i;k--)
			    cout<<" ";
		        for(int j=0;j<i;j++)
			    cout<<"* ";	
		        cout<<"\n";
	        }
		}
};
int main()
{
	int f;
	cout<<"enter rows : ";
	cin>>f;
	turf obj;
	obj.print(f);
	return 0;
}