// INHERITANCE AMBIGUITY

//SCOPE RESOLUTION OPERATOR: 

#include <iostream>
using namespace std;

class A 
{
	public :

		void func()
		{
			cout << " I am bhoomi" << endl;
		}
};


class B 
{
	public :

		void func()
		{
			cout << " I am bhoomi Agarwal" << endl;
		}
};

class C: public A, public B
{

};


int main ()
{
	C obj;
	//obj func();

	//scope resolution operator ( :: )
	//we use this op to resolve the ambiguity!
	obj.A::func();
	obj.B::func();

	return 0;
}

