/*einav bitton 318231750*/
#pragma once
#include "Animal.h"
class Giraffe : public Animal
{
	float height;//���� ���� �� ��� Giraffe
public:
	Giraffe(char* name, char* nickname, float FoodPerName, float height, int age);//����
	Giraffe(const Giraffe& g);//���� �����
	void eat();//������� �����
	void sleep();//������� ����
	void print();//������� �����
	float get_height();//����� �� �����
	~Giraffe();//����
};

