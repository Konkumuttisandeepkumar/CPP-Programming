/***WAP to calculate area and perimeter of rectangle***/

#include<iostream>
using namespace std;
int main()
{
    double	Length=0,Breadth=0,Area=0,Perimeter=0;
	cout<<"Enter a values for Length & Breadth:"<<endl;
	cin>>Length>>Breadth;
	
	Area = Length*Breadth;
	Perimeter = 2*(Length+Breadth);
	
	cout<<"Area of Rectangle: "<< Area <<endl;
	cout<<"Perimeter of Rectangle: "<< Perimeter <<endl;
	
	return 0;
}