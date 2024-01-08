//************POLYMORPHISM*****************
//compile time:
//funtion overloading.



//operator overloading
#include<iostream>
using namespace std;

class B
{
	public:
	        void operator() ()
		{
			cout<< "HELLO BHOOMI" <<endl;
                }
};

int main()
{
	B obj1;

	obj1();
	return 0;
}

