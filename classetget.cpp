#include <iostream>
using namespace std;

class Hero
{
	private:
		int health;
	public:
		char level;

		void print()
		{
			cout<<level<<endl;
		}

		int getHealth()
		{
			return health;
		}

		char getLevel()
		{
			return level;
		}

		void setHealth(int h)
		{
			health = h;
		}

		void setLevel(char ch)
		{
			level = ch;
		}

};

int main()
{
	//creation of object
        Hero thor;
	cout << "thor health is: "<<thor.getHealth() << endl;
	//use setter
	thor.setHealth(90);
	thor.level='A';

	cout<<"health is: "<<thor.getHealth()<<endl;
	cout<<"level is: "<<thor.level<<endl;

		return 0;
}



