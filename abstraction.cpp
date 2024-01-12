//*********************ABSTRACTION*************
//"IMPLIMENTATION HIDING"
//showing only essential detatils
//can use access modifiers(public,private)


#include <iostream>
using namespace std;
class abstraction
{
	private:
		int a, b;
	public:
		//method to set value of private members
		void set(int x, int y)
		{
			a = x;
			b = y;
		}
		void display()
		{
			cout<< "a = " << a << endl;
			cout<< "b = " << b << endl;
		}
};

int main()
{
	abstraction obj;
	obj.set(10, 20);
	obj.display();
	return 0;
}

