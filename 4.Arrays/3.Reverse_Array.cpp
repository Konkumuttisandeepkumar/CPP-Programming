/***WAP to reverse an array and print it***/
#include<iostream>
using namespace std;

#define MAX_SIZE 1000

int main()
{
        int arr[MAX_SIZE],rev[MAX_SIZE],i=0,j=0,size=0;

        cout<<"Enter size of the array: ";
        cin>>size;

        cout<<"Enter "<<size<<" elements in array: "<<endl;
        for(i=0;i<size;i++)
        {
                cin>>arr[i];
        }

        for(i=size-1;i>=0;i--)
        {
		rev[j]=arr[i];
		j++;
        }

	cout<<"The reversed array is: "<<endl;
	
	for(i=0;i<size;i++)
	{
		cout<<rev[i]<<" ";
	}
	cout<<endl;
       
return 0;
}

