/*einav bitton 318231750*/
#include "Zoo.h"
#include "Animal.h"
#define _CRT_SECURE_NO_WARNINGS
int Animal::count;
int main()
{
	char a[25];
	int choice = 0;
	int type;
	char name[25];
	char nickname[25];
	float FoodPerDay;
	float MaxSpeed;
	int age;
	float height;
	char FoodType[25];

	cout << "enter zoo name" << endl;
	cin.getline(a, 25);
	Zoo zoo(a);
	cout << "how much animals do you want to add?" << endl;
	cin >> choice;
	for (int i = 0; i < choice; i++)
	{
		cout << "which animals do you want to add? 1=tiger,2=giraffe,3=bat" << endl;
		cin >> type;
		if (type == 1)
		{
			cout << "enter name" << endl;
			cin >> name;
			cout << "enter nickname" << endl;
			cin >> nickname;
			cout << "enter food per day" << endl;
			cin >> FoodPerDay;
			cout << "enter max spees" << endl;
			cin >> MaxSpeed;
			cout << "Enter age" << endl;
			cin >> age;
			Animal* animal = new Tiger(name, nickname, FoodPerDay, MaxSpeed, age);
			zoo.AddAnimal(animal);
		}
		if (type == 2)
		{
			cout << "enter name" << endl;
			cin >> name;
			cout << "enter nickname" << endl;
			cin >> nickname;
			cout << "enter food per day" << endl;
			cin >> FoodPerDay;
			cout << "enter height" << endl;
			cin >> height;
			cout << "Enter age" << endl;
			cin >> age;
			Animal* animal = new Giraffe(name, nickname, FoodPerDay, height, age);
			zoo.AddAnimal(animal);
		}
		if (type == 3)
		{
			cout << "enter name" << endl;
			cin >> name;
			cout << "enter nickname" << endl;
			cin >> nickname;
			cout << "enter food per day" << endl;
			cin >> FoodPerDay;
			cout << "enter type of food" << endl;
			cin.getline(FoodType, 25);
			cout << "Enter age" << endl;
			cin >> age;
			Animal* animal = new Bat(name, nickname, FoodPerDay, FoodType, age);
			zoo.AddAnimal(animal);
		}

	}
	cout << "---------------------" << endl;
	zoo.feedAllAnimals();
	cout << "---------------------" << endl;
	zoo.sleepAnimals();
	cout << "---------------------" << endl;
	zoo.printZoo();
	cout << "---------------------" << endl;
	zoo.print_type(1);
	cout << "---------------------" << endl;
	zoo.print_type(2);
	cout << "---------------------" << endl;
	zoo.print_type(3);
	cout << "---------------------" << endl;

	system("pause");
	return 0;
}