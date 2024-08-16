/*****WAP to read n numbers from user and print the sum of positive numbers and sum of negative numbers *****/
#include<iostream>
using namespace std;


int number,i=1,value=0,positive=0,negative=0;

int main()
{

cout<<"Enter how many values to be entered:";
cin>>number;

        while(i<=number)
        {
                cout<<"Please enter the "<<i<<" value:";
                cin>>value;

                if(value>0)
                {
                        positive=positive+value;
                }
                else
                        negative=negative+value;

                i++;
        }
	cout<<"Sum of Positive numbers:"<<positive<<endl;
	cout<<"Sum of Negative numbers:"<<negative<<endl;

return 0;	
}
