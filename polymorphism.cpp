//************POLYMORPHISM*****************
//compile time:
//funtion overloading.
//operator overloading

//Function overloading with different types of arguments
#include<iostream>
using namespace std;
//Function with two integers parameters
int add(int num1, int num2)
{
	return num1 + num2;
}

//Function with two double parameters
double  add(double num1, double num2)
{
	return num1+num2;
}

int main()
{
	cout << add(10,20) <<endl;
	cout << add(10.4,20.5) <<endl;
	return 0;
}

