/***WAP to convert uppercase string to lowercase***/
#include<iostream>
#define MAX_SIZE 1000
using namespace std;

void strlwer(char str[]);

int main()
{
        char string[MAX_SIZE];

        cout<<"Enter any string: ";
        cin>>string;

        strlwer(string);

        cout<<"Upper case string: "<<string<<endl;

        return 0;
}

void strlwer(char str[])
{
        int i;

        for(int i=0;str[i]!='\0';i++)
        {
                if(str[i]>='a' && str[i]<='z')
                {
                        str[i]=str[i]-32;
                }
                else
                {
                        str[i]=str[i];
                }

        }
}

