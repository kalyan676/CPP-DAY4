#include<iostream>
using namespace std;
int main()
{
	float income,tax;
	cout<<"enter the income:";
	cin>>income;
	if(income<0)
	{
		cout<<"invalid";
		exit(0);
	}
	else
	{
	if(income<=150000)
	{
		tax = 0;
	}
	else if(income>150000 && income<=300000)
	{
		tax = 0.1*income;
	}
	else if(income>300000 && income<=500000)
	{
		tax = 0.2*income;
	}
	else 
	{
		tax = 0.3*income;
	}
}
	cout<<"tax = "<<tax;
	return 0;
}
