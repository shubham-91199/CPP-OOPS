#include<iostream>
using namespace std;

class Animal
{
	public:
		virtual void FoodHabit();
		
};
class Carnivores:public Animal
{
	public:
		void FoodHabit()
		{
			cout<<"CARNIVORES";
		}
};
class Herbivores:public Animal
{
	public:
		void FoodHabit()
		{
			cout<<"HERBIVORES";
		}
};

class Omnivores:public Carnivorous,public Herbivores
{
	public:
		void FoodHabit()
		{
			cout<<"Omnivores";
		}

};

int main()
{
	Omnivores obj;
	obj.FoodHabit();
	

	return 0;
}
