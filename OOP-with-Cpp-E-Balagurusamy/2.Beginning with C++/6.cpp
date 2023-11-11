/*Redo question 5 using a class called temp and member function*/

#include<iostream>
using namespace std;

 class temp
 {
  float temp1,cel;
  
  public:
  float conversion(float temp1);	
 
 };
 
 float temp::conversion(float f)
 {
  cel=((f-32)/9)*5;
  return cel;	
 }	
 
 int main()
 {
  temp t;
  float temp1;
  cout<<"Enter temperature in fahrenheit scale :";
  cin>>temp1;
  cout<<"Temperature in celsius is :"<<t.conversion(temp1)<<endl;	
 }
