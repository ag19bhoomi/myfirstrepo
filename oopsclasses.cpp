#include <iostream>
using namespace std;

class hero
{
  //properties
  
	int health;
	char name[10];
	float height;
};

int main()
{
	//creation of object
	hero h1;

	cout <<"size is: "<<sizeof(h1) << endl;

	return 0;
}
