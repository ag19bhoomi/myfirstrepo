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
		 //deep copy 
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

};

int main()
{
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

	hero2.print();

	
	
	
	
	
	
	
	
	/*
	Hero s(70, 'A');
		s.print();

	//copy constructor
	Hero R(s);
		R.print();

	
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
