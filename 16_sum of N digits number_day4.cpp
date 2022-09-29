

#include<iostream>
using namespace std;
int main()
{
	int n,N,r,t,sum=0,len=0;
	cout<<"enter N digit number";
	cin>>N;
	cout<<"enter a number";
	cin>>n;
	t=n;
	while(n>0)
	{
		n=n/10;
		len= len+1;
	}
if(len == N)
{
	while(t>0)
	{
	r=t%10;
	sum = sum+r;
	t=t/10;		
	}
	cout<<"\nsum of digits= "<<sum;
}
else
{
    	cout<<"enter a "<<N<<" digit number";
}

	return 0;
}
