/***WAP to find the second largest number in the array**/
#include<iostream>
using namespace std;

#define MAX_SIZE 1000

int main()
{
        int arr[MAX_SIZE];
        int i=0,size=0,large=0,second=0;

        cout<<"Enter size of the array: ";
        cin>>size;

        cout<<"Enter "<<size<<" elements in array: "<<endl;
        for(i=0;i<size;i++)
        {
                cin>>arr[i];
        }

        large=arr[0];

        for(i=1;i<size;i++)
        {
                if(arr[i]>large)
		{ 
			second=large; 
			large=arr[i];
		}
		else if(arr[i]>second && arr[i]!=large)
		{
			second==arr[i];
		}
        }

        cout<<endl;
	
	cout<<"The largest number is "<<large<<endl;
	cout<<"The second largest number is "<<second<<endl;
return 0;
}
