/***WAP to print prime numbers between 1 to n***/
#include<iostream>
using namespace std;

int prime(int);

int number=0,i=0; 

int main()
{

	cout<<"Find the prime numbers between 1 to : ";
	cin>>number;

	cout<<"All prime numbers between 1 to "<<number<<" are:"<<endl;

	for(i=2;i<=number;i++)
	{
		if(prime(i))
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
}


int prime(int n)
{

	if(n == 0 || n == 1)	return 0;

	for(int j=2;j<=n/2;j++)
	{
		if(n%j==0)
		{
			return 0;
		}
	
	}
	return 1;
}
