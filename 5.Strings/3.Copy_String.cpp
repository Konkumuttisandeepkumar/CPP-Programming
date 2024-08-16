/***WAP to copy one string to another string***/
#include<iostream>
#define MAX_SIZE 1000

using namespace std;

void strcopy(char str2[],char str1[],int n);

int main()
{
	int n=0;
	char string1[MAX_SIZE],string2[MAX_SIZE];

	cout<<"Enter the string1: ";
	cin>>string1;

	cout<<"No of characters to be copied from string1 to string2: ";
	cin>>n;

	strcopy(string2,string1,n);

	cout<<"string1: "<<string1<<endl;
	cout<<"string2: "<<string2<<endl;

	return 0;
}

void strcopy(char str2[],char str1[],int n)
{
	int i;
	for(i=0;str1[i]!='\0'&&i<n;i++)
	{
		str2[i]=str1[i];
	}
	str2[i]!='\0';

}
