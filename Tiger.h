/*einav bitton 318231750*/
#pragma once
#include"Animal.h"
class Tiger : public Animal
{
protected:
	const float MaxSpeed;///������� ������ �������� ���� �� � Tiger

public:
	Tiger(char* name, char* nickname, float FoodPerName, const float MaxSpeed, int age);//����
	Tiger(const Tiger& t);//���� �����
	void sleep();//������� ����
	void print();//������� �����
	float get_MaxSpeed();//������� ������� �� ������ �Tiger
	void eat();//������ �����
	~Tiger();
};

