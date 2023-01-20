#include <iostream>
using namespace std;
 
void num(int number);
	

int main()
{
 	
	int number1 = 0;
	cout<<"Enter the number"<<endl;
        cin>>number1;
	 num( number1);
	

	
	
 

}

	void num(int number)
	{
	for(int count=1; count<= 10;count = count + 1)
	{
          cout<<number<<"*"<<count<<"="<<number*count<<endl;;
	}


	}