#include <iostream>
using namespace std;


int main()
{
  int num1,num2=0,num3;
  
  cout<<"Enter the number"<<endl;
  cin>>num1;
  

   
    
  while (num1>0)
  { 
  num3 = num1 % 10;
  num1 = num1 / 10;
  num2 = num2 + num3;
  
  
  }
  cout<<num2; 


 }
 





 