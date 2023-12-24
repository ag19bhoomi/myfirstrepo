#include <iostream>
using namespace std;

class Hero
{
	public:
		Hero()
		{
			cout << "contructor called" << endl;
		}

};


int main()
{
	//statically object created
	cout<<"HIII"<<endl;
	Hero bhoomi;
	cout<<"hello"<<endl;
        
	//dynamically
	Hero *h = new Hero;
	
	
	return 0;
}
