//************POLYMORPHISM*****************
//Types of polymorphism
//1.compile time (static poly.):
//a.funtion overloading.
//b.operator overloading
//2. Run time (dynamic poly.):
// it depends on inheritance.

//a.Method overloading.
#include<iostream>
using namespace std;

class parent
{
	public:
	        void show() 
		{
			cout<< "Inside parent class" <<endl;
                }
};

class subclass1: public parent
{
	public: void show()
		{
			cout << "Inside subclass1" << endl;
		}
};
class subclass2: public parent
{
	public:
		void show()
		{
			cout<< "inside subclass2"<<endl;
		}
};

int main()
{
	subclass1 bh1;
	subclass2 bh2;
	bh1.show();
	bh2.show();
	return 0;
}

