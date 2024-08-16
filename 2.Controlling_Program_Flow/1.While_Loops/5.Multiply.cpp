/*****WAP to calculate the product of two numbers without using multiplication factor*****/

#include<iostream>
using namespace std;

int multiplicand=0,multiplier=0,product=0,num=0,i=0;

int main()
{

cout<<"Please enter the value of  multiplicand: ";
cin>>multiplicand;

cout<<"Please enter the value of  multiplier: ";
cin>>multiplier;

num=multiplier;
	
	while(i<num)
	{
	product+=multiplicand;
	i++;
	}

cout<<"The product of "<<multiplicand<<" and "<<multiplier<<" is "<<product<<endl;
return 0;
}
