/*einav bitton 318231750*/
#include "Tiger.h"



Tiger::Tiger(char* name, char* nickname, float FoodPerName, const float MaxSpeed, int age) :Animal(name, nickname, FoodPerName, age), MaxSpeed(MaxSpeed)
{
}
Tiger::Tiger(const Tiger& t) : Animal(t), MaxSpeed(t.MaxSpeed)
{

}
float Tiger::get_MaxSpeed()
{
	return MaxSpeed;
}
void Tiger::eat()
{
	cout << "Tiger " << id << " eats every day " << FoodPerDay << " kg meat" << endl;
}
void Tiger::sleep()
{
	cout << "Tiger " << id << " sleep only at night " << endl;
}
void Tiger::print()
{
	Animal::print();
	cout << "the max speed:" << MaxSpeed << endl;
}
Tiger::~Tiger()
{
}
