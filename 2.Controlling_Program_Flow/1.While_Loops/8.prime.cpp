/******WAP to check whether a number is prime or not*****/
#include<iostream>
using namespace std;

int number=0,i=2,count=0;

int main()
{
	cout<<"Enter a number: ";
	cin>>number;

	if(number == 0 || number == 1) count = 1;		//0 and 1 are not prime numbers

	while(i<number)
	{
		if(number%i == 0)
		{
		count++;
		break;
		}
	i++;
	}

if(count ==0)
	cout<<number<<" is a prime number"<<endl;
else
	cout<<number<<" is not a prime number"<<endl;

return 0;
}
