/*einav bitton 318231750*/
#include "Zoo.h"



Zoo::Zoo(char* name)
{
	delete[]this->name;
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
	AnimalsPtr = NULL;
	size_AnimalsPtr = 0;
}
void Zoo::AddAnimal(Animal* animal)
{
	Animal** data = NULL;
	int i;
	data = new Animal*[(size_AnimalsPtr + 1)];
	for (i = 0; i < size_AnimalsPtr; i++)
	{
		data[i] = AnimalsPtr[i];
	}
	data[size_AnimalsPtr] = animal;
	size_AnimalsPtr++;
	if (AnimalsPtr)
		delete[] AnimalsPtr;
	AnimalsPtr = data;
}
Animal* Zoo::getAnimal(int id)
{
	for (int i = 0; i < size_AnimalsPtr; i++)
	{
		if (AnimalsPtr[i]->get_id() == id)
		{
			return AnimalsPtr[i];
		}
	}
	return 0;
}
bool Zoo::removeAnimal(int id)
{
	Animal** data = NULL;
	int j;
	for (int i = 0; i < size_AnimalsPtr; i++)
	{
		if (AnimalsPtr[i]->get_id() == id)
		{
			data = new Animal*[(size_AnimalsPtr - 1)];
			for (j = 0; j < size_AnimalsPtr; i++)
			{
				if (j != i)
				{
					data[j] = AnimalsPtr[j];
				}
			}

			size_AnimalsPtr--;
			delete[]AnimalsPtr;
			AnimalsPtr = data;
			return true;
		}
	}
	return false;
}
void Zoo::feedAllAnimals()const
{
	for (int i = 0; i < size_AnimalsPtr; i++)
	{
		if (strcmp(typeid(*AnimalsPtr[i]).name(), typeid(Bat).name()) == 0)
		{
			((Bat*)AnimalsPtr[i])->eat();
		}
		if (strcmp(typeid(*AnimalsPtr[i]).name(), typeid(Tiger).name()) == 0)
		{
			((Tiger*)AnimalsPtr[i])->eat();
		}
		if (strcmp(typeid(*AnimalsPtr[i]).name(), typeid(Giraffe).name()) == 0)
		{
			((Giraffe*)AnimalsPtr[i])->eat();
		}
	}
}
void Zoo::sleepAnimals()const
{
	for (int i = 0; i < size_AnimalsPtr; i++)
	{
		if (strcmp(typeid(*AnimalsPtr[i]).name(), typeid(Bat).name()) == 0)
		{
			((Bat*)AnimalsPtr[i])->sleep();
		}
		if (strcmp(typeid(*AnimalsPtr[i]).name(), typeid(Tiger).name()) == 0)
		{
			((Tiger*)AnimalsPtr[i])->sleep();
		}
		if (strcmp(typeid(*AnimalsPtr[i]).name(), typeid(Giraffe).name()) == 0)
		{
			((Giraffe*)AnimalsPtr[i])->sleep();
		}
	}
}
void Zoo::printZoo()const
{
	cout << "The zoo name is: " << name << endl << "The sum of the animals in the zoo is: " << size_AnimalsPtr << endl;
	for (int i = 0; i < size_AnimalsPtr; i++)
	{
		if (strcmp(typeid(*AnimalsPtr[i]).name(), typeid(Bat).name()) == 0)
		{
			((Bat*)AnimalsPtr[i])->print();
			cout << endl;
		}
		if (strcmp(typeid(*AnimalsPtr[i]).name(), typeid(Tiger).name()) == 0)
		{
			((Tiger*)AnimalsPtr[i])->print();
			cout << endl;
		}
		if (strcmp(typeid(*AnimalsPtr[i]).name(), typeid(Giraffe).name()) == 0)
		{
			((Giraffe*)AnimalsPtr[i])->print();
			cout << endl;
		}

	}
}
void Zoo::print_type(int t)
{
	for (int i = 0; i < size_AnimalsPtr; i++)
	{
		if (t == 1)
		{
			if (strcmp(typeid(*AnimalsPtr[i]).name(), typeid(Tiger).name()) == 0)
			{
				((Tiger*)AnimalsPtr[i])->print();

			}
		}
		if (t == 2)
		{
			if (strcmp(typeid(*AnimalsPtr[i]).name(), typeid(Giraffe).name()) == 0)
			{
				((Giraffe*)AnimalsPtr[i])->print();

			}
		}
		if (t == 3)
		{
			if (strcmp(typeid(*AnimalsPtr[i]).name(), typeid(Bat).name()) == 0)
			{
				((Bat*)AnimalsPtr[i])->print();

			}

		}
	}
}

Zoo::~Zoo()
{
	delete[]name;
	delete[]AnimalsPtr;

}
