/*****WAP to print multiplication table******/
#include<iostream>
using namespace std;

int number1=0,number2=0,i=0,j=0;

int main()
{

cout<<"Enter a value for number1: ";
cin>>number1;

cout<<"Enter a value for number2: ";
cin>>number2;

while(i <= number1)
{
	cout<<"/*****The multiplication table of "<<i<<" is*****/"<<endl;
	while(j <= number2)
	{
		cout<<i<<"*"<<j<<"="<<i*j<<endl;
		j++;

	}
j=0;		
i++;
}
return 0;
}
