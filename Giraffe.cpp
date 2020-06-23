/*einav bitton 318231750*/
#include "Giraffe.h"


Giraffe::Giraffe(char* name, char* nickname, float FoodPerName, float height, int age) :Animal(name, nickname, FoodPerName, age)
{
	this->height = height;
}
Giraffe::Giraffe(const Giraffe& g) : Animal(g)
{
	this->height = g.height;
}
void Giraffe::eat()
{
	cout << "Giraffe " << id << " eats every day" << FoodPerDay << " kg leaves" << endl;
}
void Giraffe::sleep()
{
	cout << "Giraffe " << id << " sleeps both day and night" << endl;
}
void Giraffe::print()
{
	Animal::print();
	cout << "height:" << height << endl;
}
float Giraffe::get_height()
{
	return height;
}
Giraffe::~Giraffe()
{
}
