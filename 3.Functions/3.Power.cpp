/***WAP to find power of any number***/
#include<iostream>
using namespace std;

int power(int base,int exponent);

int main()
{
        int base=0,exponent=0,result=0;

        cout<<"Enter a value of base: ";
        cin>>base;

        cout<<"Enter a value of exponent: ";
        cin>>exponent;

        result = power(base,exponent);

        cout<<"The power of "<<base<<" and "<<exponent<<" is "<<result<<endl;
        return 0;
}

int power(int base,int exponent)
{
        int power=1,i=0;

        while(i<exponent)
        {
                power*=base;
                i++;
        }

return power;


}

