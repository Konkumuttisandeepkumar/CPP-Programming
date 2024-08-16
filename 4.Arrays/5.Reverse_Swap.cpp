/***WAP to swap and reverse the array and print***/
#include<iostream>
using namespace std;

void swaparray(int arr1[],int arr2[]);
void reversearray(int array[]);

int size=0;

#define MAX_SIZE 1000

int main()
{

	int array1[MAX_SIZE],array2[MAX_SIZE],i=0;

	cout<<"Enter size of the array: ";
	cin>>size;

	cout<<"Enter "<<size<<" elements in array1: ";
	for(i=0;i<size;i++)
	{
		cin>>array1[i];
	}

	cout<<"Enter "<<size<<" elements in array2: ";
	for(i=0;i<size;i++)
	{
		cin>>array2[i];
	}

	swaparray(array1,array2);

	cout<<"The array1 after swapped and reversed is: ";
	reversearray(array1);
	cout<<endl;

	cout<<"The array2 after swapped and reversed is: ";
	reversearray(array2);
	cout<<endl;

return 0;
}

void swaparray(int arr1[],int arr2[])
{
	int i,temp;
	
	for(i=0;i<size;i++)
	{
		temp=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=temp;
	}
}

void reversearray(int array[])
{
	int i,temp;
	
	for(i=0;i<size/2;i++)
	{
		temp=array[i];
		array[i]=array[size-i-1];
		array[size-i-1]=temp;
	}

	for(i=0;i<size;i++)
	{
		cout<<array[i]<<" ";
	}

}
