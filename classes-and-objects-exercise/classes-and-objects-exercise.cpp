#include <iostream>

using namespace std;

class Motorcycle
{
private:
    string name = "Motorcycle";
    int releaseYear = 1900;
    int mileage = 0;
    int engineCapacity = 0;
    int enginePower = 0;
    int fuelAmmount = 0;
    int maxFuelAmmount = 1000;
    string fuelType = "Gasoline";
    string typeOfDrive = "Chain";
    string color = "Red";
    string condition = "Used";
    bool damaged = false;
public:
    Motorcycle(string _name, int _releaseYear, int _mileage, int _engineCapacity, int _enginePower)
    {
        name = _name;
        releaseYear = _releaseYear;
        mileage = _mileage;
        engineCapacity = _engineCapacity;
        enginePower = _enginePower;

        cout << "Stworzono nowy motocykl" << endl;
    }

    ~Motorcycle()
    {
        cout << "Destruktor - niszcze " << name << endl;
    }

    void honk()
    {
        cout << name << " robi beep beep" << endl;
    }

    int refuel(int _fuelAmmount)
    {
        if (fuelAmmount + _fuelAmmount <= maxFuelAmmount)
        {
            fuelAmmount += _fuelAmmount;
        }

        return _fuelAmmount;
    }

    int checkFuelAmmount()
    {
        return fuelAmmount;
    }

    void describe()
    {
        cout << "Motor o nazwie" << name << " zostal wyprodukowany w " << releaseYear << " roku i ma " << fuelAmmount << "l paliwa" << endl;
    }
};

void zad_1()
{
    Motorcycle suzuki("Suzuki", 2000, 1111, 7, 100);
    Motorcycle yamaha("Yamaha", 2001, 1111, 7, 100);
    Motorcycle bmw("BMW", 2002, 1111, 7, 100);

    suzuki.describe();
    yamaha.honk();

    bmw.refuel(100);
    cout << bmw.checkFuelAmmount() << endl;
}

// zad 2
class Monster
{
private:
    string _name;
    int _maxHealth = 100;
    int _health = _maxHealth;
    int _damage;
    bool _isAlive = true;
public:
    Monster(string name, int damage = 25)
    {
        _name = name;
        _damage = damage;
    }

    ~Monster()
    {
        cout << "Destroying: " << _name << endl;
    }

    void makeSound()
    {
        cout << "Monster " << _name << " goes: RAAAH" << endl;
    }

    int health()
    {
        return _health;
    }

    bool isAlive()
    {
        return _isAlive;
    }

    int attack()
    {
        cout << _name << " deals " << _damage << "dmg" << endl;

        return _damage;
    }

    void receiveDamage(int receivedDamage)
    {
        _health -= receivedDamage;

        if (_health <= 0)
        {
            _health = 0;

            _isAlive = false;
        }
    }
};

void zad_2()
{
    Monster dragon("Big Bad Dragon", 50);
    Monster zombie("Mindless zombie", 10);

    while (dragon.isAlive() && zombie.isAlive())
    {
        zombie.receiveDamage(dragon.attack());
        dragon.receiveDamage(zombie.attack());
    }

    cout << "Fight ended: dragon has " << dragon.health() << "hp. Zombie has " << zombie.health() << "hp" << endl;
}

int main()
{
    // zad_1();
    zad_2();
}
