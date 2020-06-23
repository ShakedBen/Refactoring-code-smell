/*einav bitton 318231750*/
#pragma once
#include"Animal.h"
class Tiger : public Animal
{
protected:
	const float MaxSpeed;///פונקצית מהירות מקסימלית קיים רק ב Tiger

public:
	Tiger(char* name, char* nickname, float FoodPerName, const float MaxSpeed, int age);//בנאי
	Tiger(const Tiger& t);//בנאי מעתיק
	void sleep();//פונקציה שינה
	void print();//פונקיצת הדפסה
	float get_MaxSpeed();//פונקציה שמחזירה את מהירות הTiger
	void eat();//פונקיצ האכלה
	~Tiger();
};

