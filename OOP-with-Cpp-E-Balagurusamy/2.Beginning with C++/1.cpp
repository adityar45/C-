/*1.Write a program to display the following output using a single output statement
      Maths=90 
    Physics=77 
  Chemistry=69*/

/*
#include<iostream>
using namespace std;

int main()
{
 cout<<"Maths=90\nPhysics=77\nChemistry=69"<<endl;
 	
}
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 int i;
 char *sub[]={"Maths","Physics","Chemistry"};
 int marks[3]={90,77,69};
 
 for(int i=0;i<3;i++)
 {
  cout<<setw(10)<<sub[i]<<setw(2)<<"="<<setw(3)<<marks[i]<<endl;	
 }	
}
