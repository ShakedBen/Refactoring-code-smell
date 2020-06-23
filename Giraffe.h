/*einav bitton 318231750*/
#pragma once
#include "Animal.h"
class Giraffe : public Animal
{
	float height;//גובה קיים רק אצל Giraffe
public:
	Giraffe(char* name, char* nickname, float FoodPerName, float height, int age);//בנאי
	Giraffe(const Giraffe& g);//בנאי מעתיק
	void eat();//םונקצית האכלה
	void sleep();//פונקצית שינה
	void print();//פונקצית הדפסה
	float get_height();//מחזיר את הגובה
	~Giraffe();//הורס
};

