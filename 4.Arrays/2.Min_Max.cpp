/***WAP to out the biggest and smallest numbers and their indexes and print***/
#include<iostream>
using namespace std;

#define MAX_SIZE 1000

int main()
{
	int arr[MAX_SIZE];
	int i=0,size=0,large=0,small=0,large_index=0,small_index=0;

	cout<<"Enter size of the array: ";
	cin>>size;

	cout<<"Enter "<<size<<" elements in array: "<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	small=large=arr[0];

	for(i=1;i<size;i++)
	{	
		if(arr[i]>large) large=arr[i];
		if(arr[i]<small) small=arr[i];
	}
	
	cout<<endl;

	cout<<"The largest number in the array is: "<<large<<endl;
	cout<<"The smallest number in the array is: "<<small<<endl;

	cout<<endl;

	for(i=0;i<size;i++)
        {
                if(arr[i]==large) large_index=i;
                if(arr[i]==small) small_index=i;
        }

	cout<<"The index of largest number is: "<<large_index<<endl;
	cout<<"The index of smallest number is: "<<small_index<<endl;
return 0;
}
	
