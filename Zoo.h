/*einav bitton 318231750*/
#pragma once
#include"Bat.h"
#include"Giraffe.h"
#include"Tiger.h"
class Zoo
{
protected:
	char* name;//שם החיה
	Animal** AnimalsPtr;//מערך של חיות
	int size_AnimalsPtr;//גודל מערך של חיות
public:
	Zoo(char* name);//בנאי של גן החיות
	~Zoo();
	//geters
	void AddAnimal(Animal* animal);//פונקצית הוספת חיי לגן החיות שיודעת לעשות casting
	Animal* getAnimal(int id);//פונקציה מקבלת id של חיה ויודעת לבדוק אם היא נמצאת בגן החיות שלנו
	bool removeAnimal(int id);//מסירה חיה מגן החיות לפי מספר id
	void feedAllAnimals() const;//פונקציה שקוראת לכל פונקציות האכלה בשאר המחלקות ומאכלה את החיות
	void sleepAnimals() const;//פונקציה שקוראת לכל שאר פונקציות של השינה ויודעת לגרום לכל החיות לישון
	void printZoo() const;//מדפיסה את כל נתוני החיות
	void print_type(int t);//מדפיסה סוג חייה מסויים לפי בחירת המשתמש
};

