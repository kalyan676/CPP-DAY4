#include<iostream>
using namespace std;
class vehicle{
	public:
		vehicle()
		{
			cout<<"this is a vehicle";
		}
};
class car:public vehicle
{
	public:
		car()
		{
			cout<<"\nthis is a car";
		}
};
class racing
{
	public:
		racing()
		{
			cout<<"\nthis is racing car";
		}
};
class ferrari:public car,public racing
{
	public:
		ferrari()
		{
			cout<<"\n this is a racing ferrari car";
		}
};
int main()
{
	ferrari f;
	return 0;
}
