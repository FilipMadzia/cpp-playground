#include <iostream>
#include <string>

using namespace std;

class Cat
{
public:
    string name;
    int age = 0;

    Cat(string _name = "cat")
    {
        name = _name;

        cout << "Created new cat with name " + name << endl;
    }

    void to_string() const
    {
        cout << name + " aged " + std::to_string(age) << endl;
    }
};

int main()
{
    Cat no_contructor_parameter;
    Cat fika("Fika");
    Cat stefan("Stefan");

    fika.to_string();

    fika.age = 5;

    fika.to_string();
    stefan.to_string();

    return 0;
}