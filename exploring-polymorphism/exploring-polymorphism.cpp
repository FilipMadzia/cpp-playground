#include <iostream>
#include <string>

using namespace std;

class Animal
{
private:
    string name;
    int age = 0;
public:
    string get_name()
    {
        return name;
    }

    void set_name(string _name)
    {
        name = _name;
    }

    int get_age()
    {
        return age;
    }

    void set_age(int _age)
    {
        age = _age;
    }
};

class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Meow " + get_name() << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Bark " + get_name() << endl;
    }
};



int main()
{
    Cat fika;
    fika.set_name("Fika");
    fika.meow();

    Dog kajtek;
    kajtek.set_name("Kajtek");
    kajtek.bark();

    return 0;
}
