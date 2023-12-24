#include <iostream>
using namespace std;

class Hero
{
	private:
		int health;
	public:
		char level;
                  
		
		Hero()
		  {
			  cout<<"constructor called"<<endl;
		  }


                 //paramerterised constructor
		 Hero(int health)
		 {  
			 cout << "this -> " << this <<endl;
			 this ->health = health;
		 }
		 Hero(int health , char level)
		 {
			 this -> level = level;
			 this -> health = health;

		 }
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
	//static allocation
        Hero a(20);
       //cout << "address of a: "<< &a<< endl;
         a.print();

	//dynamically 
	Hero *h = new Hero(20);
        h->print();

	Hero temp(22, 'B');
	temp.print();
	
return 0;}
