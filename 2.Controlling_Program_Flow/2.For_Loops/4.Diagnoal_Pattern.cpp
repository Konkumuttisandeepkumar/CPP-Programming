#include<iostream>
using namespace std;

int main()
{
int rows=0,columns=0,i=0,j=0;

	cout<<"Enter the no of rows: ";
	cin>>rows;

	cout<<"Enter the no of columns: ";
        cin>>columns;

	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=columns;j++)
		{		
			if(i==j || (j == (columns+1)-i))
			{
				cout<<"1";
			}
			else
			{
				cout<<"0";
			}
		}
		cout<<endl;
	}

return 0;
}
