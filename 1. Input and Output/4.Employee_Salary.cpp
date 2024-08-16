/*Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. 
Print the ID and salary of the employee for a particular month.*/

#include<iostream>
using namespace std;
int main()
{
	int Employee_ID=0;
	int Hours=0;
	double Amount=0,Salary=0;
	
	cout<<"Enter the employee's ID number: ";
	cin>>Employee_ID;
	
	cout<<"Enter the employee's salary per hour: ";
	cin>>Amount;
	
	cout<<"Enter the total number of hours worked by an employee: ";
	cin>>Hours;
	
	Salary = Amount*Hours;
	
	cout<<"Total salary of an employee "<<Employee_ID<<" as per total worked hours is: "<<Salary;
	
	return 0;
}