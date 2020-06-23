/*einav bitton 318231750*/
#pragma once
#include "Animal.h"
#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<string.h>
class Bat :public Animal
{
protected:
	char* FoodType;//סוג אוכל קיים רק אצל Bat
public:
	Bat(char* name, char* nickname, float FoodPerName, char* FoodType, int age);//בנאי
	Bat(const Bat& b);//בנאי מעתיק
	void sleep();//פונקצית שינוי לשינה
	void eat();//פונקיצת האכלה
	void print();//פונקצית הדפסת נתונים
	~Bat();//בנאי הורס
};

