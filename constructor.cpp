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
			  cout<<"Simple constructor called"<<endl;
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
		 //copy contructor made by user
		 Hero(Hero& temp)
		 {
			 cout<<"copy constructor called"<<endl;
			 this ->health = temp.health;
			 this ->level = temp.level;
		 }

		void print()
		{
			cout<<"Health is: "<<this ->health<<endl;
			cout<<"Level: "<<this->level<<endl;
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

	
	Hero s(70, 'A');
		s.print();

	//copy constructor
	Hero R(s);
		R.print();

	/*
	//static allocation
        Hero a(20);
       //cout << "address of a: "<< &a<< endl;
         a.print();

	//dynamically 
	Hero *h = new Hero(20);
        h->print();

	Hero temp(22, 'B');
	temp.print();
	*/
return 0;}
