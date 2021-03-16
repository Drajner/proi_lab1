#include "Human.h"
#include <iostream>
#include <string>

Human::Human(std::string standardname, int standardage)
{
	name = standardname;
	age = standardage;
}

void Human::info()
{
	std::cout << name << " is " << age << "." << std::endl;
}
