/***WAP to calculate the sum of natural numbers between 1 to n ***/
#include<iostream>
using namespace std;

int sum_of_num(int);

int main()
{
	int number=0,sum=0;

        cout<<"Find the sum of all natural  numbers between 1 to : ";
        cin>>number;

    	sum = sum_of_num(number);

	cout<<"The sum of natural numbers between 1 to "<<number<<" is : "<<sum<<endl;
	
	return 0;
}

int sum_of_num(int number)
{
        int sum=0,i=0;

	for(int i=1;i<=number;i++)
	{
		sum+=i;		
	}

return sum;

}

