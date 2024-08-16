/***WAP to calculate area and perimeter of circle*/

#include<iostream>
using namespace std;
int main()
{
	float Area,Perimeter,Radius;
	
	cout<<"Enter the radius of a circle: ";
	cin>>Radius;
	
	Area=3.14*Radius*Radius;
	Perimeter=2*3.14*Radius;
	
	cout<<"Area of circle is: "<<Area<<endl;
	cout<<"Perimeter of circle is: "<<Perimeter<<endl;
	
	return 0;
}