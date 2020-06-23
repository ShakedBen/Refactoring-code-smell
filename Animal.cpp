/*einav bitton 318231750*/
#include "Animal.h"


int Animal::get_id()
{
	return id;
}
Animal::Animal(char* name, char* nickname, float FoodPerDay, int age) :id(++count)
{

	this->name = new char[(strlen(name) + 1)];
	strcpy(this->name, name);
	this->nickname = new char[strlen(nickname) + 1];
	strcpy(this->nickname, nickname);
	this->FoodPerDay = FoodPerDay;
	this->age = age;

}
Animal::Animal(const Animal& a) :id(a.id)
{
	this->name = new char[strlen(a.name) + 1];
	strcpy(this->name, a.name);
	this->nickname = new char[strlen(a.nickname) + 1];
	strcpy(this->nickname, a.nickname);
	FoodPerDay = a.FoodPerDay;
	age = a.age;
}
void Animal::print()
{
	cout << "the animal name:" << name << endl;
	cout << "the animal nickname:" << nickname << endl;
	cout << "the animal id:" << id << endl;
	cout << "the animal age: " << age << endl;

}
Animal::~Animal()
{
	delete[] name;
	delete[] nickname;
}
