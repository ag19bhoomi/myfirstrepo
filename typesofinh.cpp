/*********************Types of INHERITANCE***************
 1. Single inheritance:
 */

//Example of single inheritance:

#include <iostream>
using namespace std;

class Animal
{
	public: 
		int age;
		int weight;



	public:
		void speak()
		{
			cout << "speaking: " << endl;
		}
};


class Dog: public Animal
{
	
};

int main()
{
	Dog d;
	d.speak();
	cout<< d.age<<endl;
return 0;
}
