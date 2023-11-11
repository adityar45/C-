/*2.Write a program to read two numbers from the keyboard and display the larger value on the screen*/

#include<iostream>
using namespace std;

int main()
{
 float a,b;
 cout<<"Enter two numbers : "<<endl;
 cin>>a>>b;
 
 if(a>b)
 {
  cout<<"Large value ="<<a<<endl;
 }
 else
 {
  cout<<"Large value ="<<b<<endl;	
 } 	
}
