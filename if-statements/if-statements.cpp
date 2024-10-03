#include <iostream>

using namespace std;

void zad1()
{
    cout << "Instrukcja if - najprostsza postac instrukcji if" << endl << endl;

    bool isMonsterAlive = true;
    int monsterHp = 50;
    int monsterMana = 0;

    if (isMonsterAlive)
        cout << "Potworek zyje!" << endl;

    if (isMonsterAlive)
    {
        cout << "Potworek zyje!" << endl;
        cout << "Potworek ma " << monsterHp << "HP" << endl;
    }

    if (monsterHp > 0)
        cout << "Potworek zyje!" << endl;

    isMonsterAlive = false;

    if (!isMonsterAlive)
        cout << "Potworek nie zyje... RIP" << endl;
    else
        cout << "Potworek jeszcze zyje..." << endl;

    cout << "Spada meteoryt, potworek ma 50% szans na przezycie" << endl;

    srand(time(0));
    isMonsterAlive = rand() % 2;

    if (isMonsterAlive)
        cout << "Potworek przezyl upadek meteorytu" << endl;
    else
        cout << "Meteoryt z sila kilkuset bomb atomowych wyparowal potworeka... RIP" << endl;
}

void zad2()
{
    int monsterCount = 0;

    cout << "Podaj liczbe potworkow: ";
    cin >> monsterCount;

    if (monsterCount == 0)
    {
        cout << "brak potworkow" << endl;
    }
    else if (monsterCount == 1)
    {
        cout << "jeden jedyny samotny potworek" << endl;
    }
    else if (monsterCount == 2)
    {
        cout << "dwa potworki" << endl;
    }
    else if (monsterCount < 10)
    {
        cout << "kilka potworkow" << endl;
    }
    else if (monsterCount  < 20)
    {
        cout << "kilkanascie potworkow" << endl;
    }
    else if (monsterCount < 50)
    {
        cout << "horda potworkow" << endl;
    }
    else if (monsterCount < 100)
    {
        cout << "wataha potworkow" << endl;
    }
    else if (monsterCount < 800)
    {
        cout << "setki potworkow" << endl;
    }
    else if (monsterCount < 2000)
    {
        cout << "legion potworkow" << endl;
    }
    else
    {
        cout << "legiony potworkow arghhh!" << endl;
    }

    int monster1Hp = 0;
    int monster2Hp = 0;
    int monster3Hp = 0;

    srand(time(0));

    monster1Hp = (rand() % 100) - 20;
    monster2Hp = (rand() % 100) - 20;
    monster3Hp = (rand() % 100) - 20;

    if (monster1Hp > 0 && monster2Hp > 0 && monster3Hp > 0)
    {
        cout << "Wszystkie potworki zyja" << endl;
        cout << "Potworek 1 hp: " << monster1Hp << endl;
        cout << "Potworek 2 hp: " << monster2Hp << endl;
        cout << "Potworek 3 hp: " << monster3Hp << endl;
    }
    else
    {
        cout << "Przynajmniej 1 potworek nie zyje... ktory?" << endl;

        if (monster1Hp <= 0)
            cout << "potworek 1 RIP" << endl;
        if (monster2Hp <= 0)
            cout << "potworek 2 RIP" << endl;
        if (monster3Hp <= 0)
            cout << "potworek 3 RIP" << endl;
    }
}

int main()
{
    zad1();
    zad2();
}
