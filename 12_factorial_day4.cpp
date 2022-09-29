#include<iostream>
using namespace std;
int main()
{
int n,i,fact=1;
cout<<"enter a  number";
cin>>n;
if(n<0)
{
	cout<<"error! factorial doesnot exist";
}
else if(n==0)
{
	cout<<"factorial of 0 is 1";
}
else
{
	for(i=1;i<=n;i++)
	{
		fact = fact*i;
	}
}
cout<<"factorial of "<<n<<" is "<<fact;
return 0;
}
