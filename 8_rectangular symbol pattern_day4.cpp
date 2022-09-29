#include<iostream>
using namespace std;
int main()
{
	int i,j,r,c;
	cout<<"enter the number of rows and columns";
	cin>>r>>c;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
