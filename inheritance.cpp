/**********Defining INHERITANCE****************
 * A class will have a property and you ing=herit that property in another class.
 *There is a parent class and a sub/child class.
 * in mode of access: you cant acces any private variable in public class.
 *Private data member of any class is not accessible.
 */

//Implimentation:


#include <iostream>
using namespace std;

class Human
{
	public:
		int height;
		int age;
        	int weight;

	public:
		int getage()
		{
			return this->age;
		}
	
		void setWeight(int w)
		{
			this->weight = w;
		}

};
class Male: private Human {
	public:
		string color;

		void sleep()
		{
			cout<<"male sleeping"<<endl;
		}

// in case of public variable and protected or private class it can only be used inside the class
		int getHeight()
		{
			return this->height;
		}
};

int main()
{
	Male m1;
	cout<<m1.getHeight()<<endl;
















/* when class and variable both are marked public
  Male m1;
  cout<< m1.height<< endl;
*/










/*	Male ob;
	cout<<ob.age<<endl;
	cout<<ob.weight<<endl;
	cout<<ob.height<<endl;

	cout<<ob.color<<endl;
	ob.setWeight(52);
	cout<<ob.weight<<endl;
	ob.sleep();
*/





	return 0;
	
}
