#include<iostream>
using namespace std;

int main()
{
	int rows=0,columns=0,i=0,j=0;
	char n= 'A';

	cout<<"Enter no of rows: ";
	cin>>rows;

	cout<<"Enter no of columns: ";
	cin>>columns;

	for(i=0;i<rows;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<n;
			n++;
		}
	cout<<endl;
	}

return 0;
}
