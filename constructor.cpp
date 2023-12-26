#include <iostream>
#include <cstring>
using namespace std;

class Hero
{
	private:
		int health;
	public:
		char level;
		char *name;
		static int time;


                  
		
		Hero()
		  {
			  cout<<"Simple constructor called"<<endl;
		            name = new char [100];

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
		 //deep copyi 
		  Hero(Hero& temp)
		 {
			 char *ch = new char[strlen(temp.name) +1];
			 strcpy(ch,temp.name);
			 this ->name = ch;


			 cout<<"copy constructor called"<<endl;
			 this ->health = temp.health;
			 this ->level = temp.level;
		 }
                  


		void print()
		{
			cout<<"[Name: "<<this->name<<",";
			cout<<"Health: "<<this ->health<<",";
			cout<<"Level: "<<this->level<<"]";
		cout<<endl<<endl;
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
		void setName(char name[])
		{
			strcpy(this->name,name);
		}
		static int random()
		{
			return time;
		}

		//Destructor
		~Hero()
		{
		cout << "Destructor called"<<endl;
	        }
	

};

int Hero :: time = 5;

int main()
{      
	//static member shout be use like this
	cout << Hero::time<<endl;

  
       




















	/*
	//static
	Hero a;

	//dynamically
          Hero *b = new Hero();
	
	//call destructor manually
	delete b;

	//understanding shallow copy
	Hero hero1;
	hero1.setHealth(10);
	hero1.setLevel('A');
	char name[10] = "Bhoomi";
	hero1.setName(name);

	hero1.print();

	
	//use default copy constructor
	//default copy constructor uses shallow copy constructor
	Hero hero2(hero1);
	hero2.print();

	hero1.name[0] ='G';
	hero1.print();

	hero2.pint();
		*/
return 0;}
