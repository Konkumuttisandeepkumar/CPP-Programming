/***WAP to find count the odd and even numbers in given array***/
#include<iostream>
using namespace std;

#define MAX_SIZE 1000

int main()
{
	int arr[MAX_SIZE],i,size,odd,even;

	cout<<"Enter size of the array: ";
	cin>>size;

	cout<<"Enter "<<size<<" elements in array: "<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}

	even=0,odd=0;

	for(i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	cout<<"Total even elements : "<<even<<endl;
	cout<<"Total odd elements : "<<odd<<endl;
return 0;
}
