#include <iostream>
using namespace std;


int main()
{
  int y;
  cout<<"Enter the number"<<endl;
  cin>>y;
  int pre = 0;
  int cur =1;
  cout<<""<<pre<<","<<cur<<",";
  for(int x=3; x <= y; x++)
  {
    int next =0 ;
    next = pre + cur;
    cout<<next<<",";
    pre = cur;
    cur = next;


  }

     
  }








