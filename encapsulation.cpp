/**************Defining ENCAPSULATION****************
*wrapping up data members in fuctions.
*Fully encapsulatad class: all D.M. are private.
*Encap is information hiding.
*security will increase using this and they can only be used by using getter.
*Class can be mark read only
*Encap helps in unit testing.
*/

//Implimentation:

#include<iostream>
using namespace std;

class student
{
	private:
		int age;
                int height;

	public:
		int getage()
		{
			return this->age;
		}
};
int main()
{
	student first;

	cout<<"Thats how it works"<<endl;

	return 0;
}


