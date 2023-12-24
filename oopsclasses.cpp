#include <iostream>
using namespace std;

class hero
{
  //properties
   public:                    //they can be used outside class
	int health;
   private:                    //they can only be used inside class
	char name[10];
	
	void print()
	{
		cout<<name<<endl;
	}


};

int main()
{
	//creation of object
	hero h1;

	cout <<"health is: "<<h1.health<<endl;

	return 0;
}
