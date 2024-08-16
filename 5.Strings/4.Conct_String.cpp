/***WAP to concatenate two strings***/
#include<iostream>
#define MAX_SIZE 1000
using namespace std;

void strconct(char str1[],char str2[],int n);

int main()
{
	char string1[MAX_SIZE],string2[MAX_SIZE];
	int n;

	cout<<"Enter a string 1: ";
	cin>>string1;

	cout<<"Enter a string2: ";
	cin>>string2;

	cout<<"Enter no of characters to be concatenated: ";
	cin>>n;

	strconct(string1,string2,n);

	cout<<"Concatenated string is: "<<string1<<endl;

	return 0;
}

void strconct(char str1[],char str2[],int n)
{
	int i,j;

	for(i=0;str1[i]!='\0';i++);
	
	for(j=0;str2[j]!='\0'&&j<n;j++,i++)
	{
		str1[i]=str2[j];
	}
	str1[i]='\0';
}
