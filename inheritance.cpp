/**********Defining INHERITANCE****************
 * A class will have a property and you ing=herit that property in another class.
 *There is a parent class and a sub/child class.
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
class Male: public Human {
	public:
		string color;

		void sleep()
		{
			cout<<"male sleeping"<<endl;
		}
};

int main()
{
	Male ob;
	cout<<ob.age<<endl;
	cout<<ob.weight<<endl;
	cout<<ob.height<<endl;

	cout<<ob.color<<endl;
	ob.setWeight(52);
	cout<<ob.weight<<endl;
	ob.sleep();






	return 0;
	
}
