#include <iostream>

using namespace std;

int main()
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
