/*4.Write a program to read the values ofa,b and c and display values of x , where
x = a/b-c*/

#include<iostream>
using namespace std;

int main()
{
 
 float a,b,c,x;
 
 cout<<"Enter the values of a ,b and c :";
 cin>>a>>b>>c;

 x=a/(b-c);
 if((b-c)!=0)
 {
 cout<<"Value of x is :"<< x<<endl;
 }
 else
 {
  cout<<"x = infinity"<<endl;	
 }

}




