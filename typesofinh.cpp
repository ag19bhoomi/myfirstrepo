/*********************Types of INHERITANCE***************
 1. Single inheritance:
 2. Multi-level inheritance:
 3. Multiple ineritance:
 */

//Example of multiple inheritance:

#include <iostream>
using namespace std;

class Animal
{
	public: 
		int age;
		int weight;



	public:
		void bark()
		{
			cout << "barking" << endl;
		}
};


class Human
{
	public: 
		string color;

	public: 
		void speak()
		{
			cout << "speaking" <<endl;
		}
};

class hybrid: public Animal , public Human 
{
};


int main()
{
	hybrid obj1;
	obj1.speak();
	obj1.bark();

	
	return 0;
}
