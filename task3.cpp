#include<iostream>
using namespace std;
void print(int number);

int main()
{
 int num1,count=0;
 cout<<"Enter the number"<<endl;
 cin>>num1;
 while(num1>0)
 {
    int   num2=0 ;
    num2 = num1 % 10;
    num1 = num1 / 10;
    count ++;
    
    if (num1 == 0)
    {

      break;
    }


 }
 cout<<count<<endl;



}