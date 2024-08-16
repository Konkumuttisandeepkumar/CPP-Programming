/***WAP to find the length of a string***/
#include<iostream>
using namespace std;
#define MAX_SIZE 1000

int strlen(char str[]);

int main()
{

	char string[MAX_SIZE];
	int length=0;

	cout<<"Enter a string: ";
	cin>>string;

	length=strlen(string);
	
	cout<<"The Length of the string \""<<string<<"\" is: "<<length<<endl;

	return 0;

}

int strlen(char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
}
