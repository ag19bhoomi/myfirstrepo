/*********************Types of INHERITANCE***************
 1. Single inheritance:
 2. Multi-level inheritance:
 3. Multiple ineritance:
 4. Hicrarchical inheritance:
 5. Hybrid Inheritance:
 */

//Example of hybrid inheritance:

#include <iostream>
using namespace std;


//parent class 1:
class vehicle 
{
	public:
		 vehicle()
		{
			cout << "this is a vehicle" << endl;
		}
};

//parent class 2:
class fare
{
	public: 
		fare()
		{
			cout << "Fare of vehicle" <<endl;
		}
};

//child class:
class car: public vehicle
{

};

//child class 2:
class bus: public vehicle, public fare
{
};

//main function:
int main()
{
       //creating object of sub class will
       //invoke the contructor of base class.
       bus obj2;

       


	
	return 0;
}
