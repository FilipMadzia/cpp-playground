#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
	// Przyk�ad funkcji zaprzyja�nionej
	string privateText = "Very private text!!1!";
public:
	string name;
	int age;

	// Przyk�ad funkcji zaprzyja�nionej
	friend void friendFunction(Human&);

	Human(string _name = "John Kler", int _age = 0)
	{
		name = _name;
		age = _age;
	}

	void HumanMethod()
	{
		cout << "This method was declared in the Human class" << endl;
	}

	string getInfo()
	{
		return "Human with name " + name + " is " + to_string(age) + " years old";
	}
};

class Farmer : public Human
{
public:
	Farmer(string _name, int _age) : Human(_name, _age) { }

	string getInfo()
	{
		return "Farmer with name " + name + " is " + to_string(age) + " years old";
	}
};

class Smither : public Human
{
public:
	Smither(string _name, int _age) : Human(_name, _age) { }

	string getInfo()
	{
		return "Smither with name " + name + " is " + to_string(age) + " years old";
	}
};

// Przyk�ad funkcji zaprzyja�nionej
void friendFunction(Human& human)
{
	cout << human.privateText << endl;
}

int main()
{
	Farmer McDonald("Old Mcdonald", 56);
	Smither Smith("Will Smith", 34);

	// Przyk�ad polimorfizmu
	cout << McDonald.getInfo() << endl;
	cout << Smith.getInfo() << endl;

	// Przyk�ad dziedziczenia
	McDonald.HumanMethod();

	// Przyk�ad funkcji zaprzyja�nionej
	Human human;
	friendFunction(human);
}
