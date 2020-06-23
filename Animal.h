/*einav bitton 318231750*/
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<typeinfo.h>
#include<string.h>
#include<string>
using namespace std;
class Animal
{

protected:

	const int id;//���� ����
	int age;//���
	char* name;//��
	char* nickname;//�����
	float FoodPerDay;//���� ����

public:
	static int count;//���� �� ���� ����� ����� �����
	Animal(char* name, char* nickname, float FoodPerDay, int age);//����
	Animal(const Animal& a);//���� �����
	virtual void eat() = 0;//������� ��������� �����
	virtual void sleep() = 0;//������� ��������� �����
	virtual void print();//������� ����� ����� �� ����� 
	virtual ~Animal();//���� ����
	virtual int get_id();//����� �� � id
};
