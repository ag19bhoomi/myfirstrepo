/*********************Types of INHERITANCE***************
 1. Single inheritance:
 2. Multi-level inheritance:
 */

//Example of multi-level inheritance:

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
class Lebra: public Dog
{

};

int main()
{
	Lebra l;
	l.speak();
	cout<< l.age<<endl;

	
	return 0;
}
