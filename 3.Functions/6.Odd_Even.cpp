/***WAP to find odd and even number***/
#include<iostream>
using namespace std;

int iseven(int);

int main()
{
        int number;

        cout<<"Enter any number: ";
        cin>>number;

        if(iseven(number))
        {
                cout<<"The number "<<number<<" is even."<<endl;
        }
        else
        {
                cout<<"The number "<<number<<" is odd."<<endl;
        }

return 0;
}

int iseven(int num)
{
        return !(num&1);
}

