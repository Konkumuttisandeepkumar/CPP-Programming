/***WAP to find square root of any number using sqrt() predefined function***/
#include<iostream>
#include<math.h>

using namespace std;

double root,number;

int main()
{

	cout<<"Enter any number to find square root : ";
	cin>>number;

	root = sqrt(number);

	cout<<"Square root of "<<number<<" is : "<<root<<endl;
	
return 0;
}
