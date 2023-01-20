#include <iostream>
using namespace std;
void print();


int main()
{
  int num1,numy,count=0;
  cout<<"Enter the number on which the operation will perform"<<endl;
  cin>>num1;
  cout<<"Enter the number count"<<endl;
  cin>>numy;

  while(num1>0)
  {
    int num2 = 0 ;
    num2 = num1 % 10;
    if (num2 == numy)
    {
      count++;
    }
    num1 =  num1 / 10;


  }
  cout<<""<<count;

}


