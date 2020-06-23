/*einav bitton 318231750*/
#include "Bat.h"

Bat::Bat(char* name, char* nickname, float FoodPerName, char* FoodType, int age) :Animal(name, nickname, FoodPerDay, age)
{
	this->FoodType = new char[strlen(FoodType) + 1];
	strcpy(this->FoodType, FoodType);
}
Bat::Bat(const Bat& b) : Animal(b)
{
	this->FoodType = new char[strlen(b.FoodType) + 1];
	strcpy(this->FoodType, b.FoodType);
}
void Bat::eat()
{
	cout << "Bat " << id << " eats every day " << FoodPerDay << " kg of " << FoodType << endl;
}
void Bat::sleep()
{
	cout << "Bat " << id << "sleeps only at day " << endl;
}
void Bat::print()
{
	Animal::print();
}
Bat::~Bat()
{
	delete[] FoodType;
}
