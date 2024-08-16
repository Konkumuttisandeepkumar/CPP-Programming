/*****WAP to find the factorial of a given number*****/
#include<iostream>
using namespace std;

long int factorial=1;
int integer=0,n=0,i=1;

int main()
{
	cout<<"Enter an integer:";
	cin>>integer;
	
	n=integer;

	while(i<=n)
	{
	
	factorial*=i;
	i++;
	}

cout<<"The factorial of "<<integer<<" is "<<factorial<<endl;
return 0;

}
