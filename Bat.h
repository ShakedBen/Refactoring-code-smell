/*einav bitton 318231750*/
#pragma once
#include "Animal.h"
#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<string.h>
class Bat :public Animal
{
protected:
	char* FoodType;//��� ���� ���� �� ��� Bat
public:
	Bat(char* name, char* nickname, float FoodPerName, char* FoodType, int age);//����
	Bat(const Bat& b);//���� �����
	void sleep();//������� ����� �����
	void eat();//������� �����
	void print();//������� ����� ������
	~Bat();//���� ����
};

