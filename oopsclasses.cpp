#include <iostream>
using namespace std;

class hero
{
  //properties
   public:                    //they can be used outside class
	int health;
	char name;
	
	void print()
	{
		cout<<name<<endl;
	}


};

int main()
{
	//creation of object
	hero h1;
	 h1.health = 90;
	 h1.name = 'A';

	cout <<"health is: "<<h1.health<<endl;

	return 0;
}
