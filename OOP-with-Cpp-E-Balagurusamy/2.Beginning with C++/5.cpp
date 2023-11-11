/*5.write a c++ program that will ask for a temperature in fahrenheit and display it in celsius.*/

#include<iostream>
using namespace std;

int main()
{
 float temp,cel;
 cout<<"Enter the temperature in fahrenheit :";
 cin>>temp;
 
 cel=((temp-32)/9)*5;
 cout<<"Temperature in celsius is:"<<cel<<endl;	
}
