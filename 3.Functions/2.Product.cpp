/***WAP to calculate the product of two numbers without using multiplication factor***/
#include<iostream>
using namespace std;

int multiplication(int multiplicand,int multiplier);

int main()
{
	int multiplicand=0,multiplier=0,product=0;

	cout<<"Enter a value of multiplicand: ";
	cin>>multiplicand;

	cout<<"Enter a value of multiplier: ";
	cin>>multiplier;

	product = multiplication(multiplicand,multiplier);

	cout<<"The product of "<<multiplicand<<" and "<<multiplier<<" is "<<product<<endl;
	return 0;
}

int multiplication(int multiplicand,int multiplier)
{
	int product=0,i=0;

	while(i<multiplier)
	{
		product+=multiplicand;
		i++;
	}

return product;


}
