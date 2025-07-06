#ifndef CAT_H
#define CAT_H

#include <string>

class Cat
{
private:
	std::string name;
	int age;
public:
	Cat(const std::string& name, int age);

	void display() const;
};

#endif
