/*****WAP to find sum of first and last digit of any number*****/
#include<iostream>
using namespace std;

int first_digit=0,last_digit=0,number=0;
int main()
{
	cout<<"Enter a number:";
	cin>>number;
	
	first_digit=number;

	while(first_digit>=10)
	{
		first_digit/=10;
	}
	cout<<"The first digit of given number is: "<<first_digit<<endl;

	last_digit=number%10;
        cout<<"The last digit of given number is: "<<last_digit<<endl;

	cout<<"The sum of first and last digit numbers is: "<<first_digit+last_digit<<endl;

return 0;
}
