/*einav bitton 318231750*/
#pragma once
#include"Bat.h"
#include"Giraffe.h"
#include"Tiger.h"
class Zoo
{
protected:
	char* name;//�� ����
	Animal** AnimalsPtr;//���� �� ����
	int size_AnimalsPtr;//���� ���� �� ����
public:
	Zoo(char* name);//���� �� �� �����
	~Zoo();
	//geters
	void AddAnimal(Animal* animal);//������� ����� ��� ��� ����� ������ ����� casting
	Animal* getAnimal(int id);//������� ����� id �� ��� ������ ����� �� ��� ����� ��� ����� ����
	bool removeAnimal(int id);//����� ��� ��� ����� ��� ���� id
	void feedAllAnimals() const;//������� ������ ��� �������� ����� ���� ������� ������ �� �����
	void sleepAnimals() const;//������� ������ ��� ��� �������� �� ����� ������ ����� ��� ����� �����
	void printZoo() const;//������ �� �� ����� �����
	void print_type(int t);//������ ��� ���� ������ ��� ����� ������
};

