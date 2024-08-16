/*****WAP to check whether the number is palindrome or not*****/
#include<iostream>
using namespace std;

int number=0,reverse=0,num=0;

int main()
{
	cout<<"Enter a number: ";
	cin>>number;

	num=number;

	while(number!=0)
	{
		reverse=(reverse*10)+(number%10);
		number/=10;
	}		

	if(reverse == num)
	{	
		cout<<"The entered number "<<num<<" is palindrome"<<endl;
	}	
	else
	{	
		cout<<"The entered number "<<num<<" is not  palindrome"<<endl;
	}	
	
return 0;
}
