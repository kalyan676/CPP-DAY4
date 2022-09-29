#include<iostream>
#include<math.h>
using namespace std;
int main() 
{ 
int m, n,start,stop; 
float p ; 
cout<<"Enter two numbers : "; 
cin>>start>>stop; 
	for(n=start;n<=stop;n++)
	{
		p = sqrt(n) ; 
 		m = p ; 
 		if (p == m) 
  		cout<<"\n"<<n; 	  		
	}
 	return 0;
} 

