/***WAP to reverse a string***/
#include<iostream>
#define MAX_SIZE 1000
using namespace std;

void revstr(char str[],char rev[]);

int main()
{
	char string[MAX_SIZE],reverse[MAX_SIZE];

	cout<<"Enter a string: ";
	cin>>string;

	revstr(string,reverse);

	cout<<"Reversed string is: "<<reverse<<endl;
	
	return 0;
}

void revstr(char str[],char rev[])
{
	int i,j=0,length=0;
	
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}

	for(i=length-1;i>=0;i--)
	{
		rev[j]=str[i];
		j++;
	}
	rev[j]='\0';
}

