#include<iostream>
using namespace std;

int rows=0,columns=0,i,j;

int main()
{
        cout<<"Enter the value for rows: ";
        cin>>rows;

        cout<<"Enter the value for columns: ";
        cin>>columns;

        for(i=1;i<=rows;i++)
        {
                for(j=1;j<=i;j++)
                {
                 
                          cout<<j;
       		}
                cout<<endl;
        }
return 0;
}


