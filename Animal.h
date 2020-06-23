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

	const int id;//מספר מזהה
	int age;//גיל
	char* name;//שם
	char* nickname;//כינוי
	float FoodPerDay;//כמות אוכל

public:
	static int count;//משנה את מספר הזהות בצורה סטטית
	Animal(char* name, char* nickname, float FoodPerDay, int age);//בנאי
	Animal(const Animal& a);//בנאי מעתיק
	virtual void eat() = 0;//פונקיצה אבסטרקטית טהורה
	virtual void sleep() = 0;//פונקיצה אבסטרקטית טהורה
	virtual void print();//פונקיצה הדפסה כללית של המידע 
	virtual ~Animal();//בנאי הורס
	virtual int get_id();//מחזיר את ה id
};
