#include<iostream>
#include<string.h>
using namespace std;
main(){
   int i,j,n;
   char str[100][100],s[100];
   cout<<"Enter number of names :\n";
   cin>>n;
   cout<<"Enter names in any order:\n";
   for(i=0;i<n;i++)
   {
      cin>>str[i];
   }
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(s,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],s);
         }
      }
   }
   cout<<"\nThe sorted order of names are:\n";
   for(i=0;i<n;i++){
      cout<<str[i]<<"\n";
   }
}
