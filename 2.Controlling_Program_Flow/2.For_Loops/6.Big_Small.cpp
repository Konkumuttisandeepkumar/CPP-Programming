/******write a program to input n numbers and print the largest and smallest of them******/
#include<iostream>
using namespace std;

int large=0,small=0,numbers=0,digits=0;

int main()
{
	cout<<"Enter the count of numbers will be entered: ";
	cin>>numbers;

	cout<<"Enter the first number: ";
	cin>>digits;

	large=digits;
	small=digits;

	for(int i=1;i<=numbers-1;i++)
	{
		cout<<"Enter the remaining numbers: ";
		cin>>digits;
		
		if(digits > large) large = digits;
		if(digits < small) small = digits;
	}
	
	cout<<"The largest number is "<<large<<endl;
	cout<<"The smallest number is "<<small<<endl;

return 0;
}
