/*****WAP to find power of any number*****/
#include<iostream>
using namespace std;

int base=0,exponent=0,num=0,i=0;
long long int power=1;

int main()
{

cout<<"Please enter the base value: ";
cin>>base;

cout<<"Please enter the exponent value: ";
cin>>exponent;

num=exponent;

        while(i<num)
        {
        power*=base;
        i++;
        }

cout<<"The power of "<<base<<" and "<<exponent<<" is "<<power<<endl;
return 0;
}

