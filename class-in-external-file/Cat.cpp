#include <iostream>
#include "Cat.h"

Cat::Cat(const std::string& name, int age)
	: name(name), age(age) {}

void Cat::display() const
{
	std::cout << "Cat name: " << name << ", age: " << age << std::endl;
}
