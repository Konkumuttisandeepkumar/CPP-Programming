/***********WAP to print all odd and even numbers between 2 given numbers***************/
#include<iostream>
using namespace std;

int number1,number2,i;
int main()
{
cout<<"Enter a value for number1: ";
cin>>number1;

cout<<"Enter a value for number2: ";
cin>>number2;

cout<<"The even numbers between "<<number1<<" & "<<number2<<" are:"<<endl;

i=number1;

while(i <= number2)
{
if(i%2 == 0)

	cout<<i<<endl;
	i++;
}

cout<<"The odd numbers between "<<number1<<" & "<<number2<<" are:"<<endl;

i=number1;

while(i <= number2)
{
if(i%2 != 0)

        cout<<i<<endl;
        i++;
}

}
