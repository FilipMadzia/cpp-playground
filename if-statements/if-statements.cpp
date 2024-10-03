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

void zad3()
{
	cout << "Przyklad instrukcji switch - nazwa dnia tygodnia" << endl << endl;

	int dayOfWeekNumber = 0;

	cout << "Podaj numer dnia tygodnia: ";
	cin >> dayOfWeekNumber;

	switch (dayOfWeekNumber)
	{
		case 1:
			cout << dayOfWeekNumber << ". dzien tygodnia to poniedzialek" << endl;
			break;
		case 2:
			cout << dayOfWeekNumber << ". dzien tygodnia to wtorek" << endl;
			break;
		case 3:
			cout << dayOfWeekNumber << ". dzien tygodnia to sroda" << endl;
			break;
		case 4:
			cout << dayOfWeekNumber << ". dzien tygodnia to czwartek" << endl;
			break;
		case 5:
			cout << dayOfWeekNumber << ". dzien tygodnia to piatek" << endl;
			break;
		case 6:
			cout << dayOfWeekNumber << ". dzien tygodnia to sobota" << endl;
			break;
		case 7:
			cout << dayOfWeekNumber << ". dzien tygodnia to niedziela" << endl;
			break;
		default:
			cout << "Nieprawidlowy numer dnia tygodnia! Podano numer: " << dayOfWeekNumber << endl;
			break;
	}

	string dayOfWeekName;

	switch (dayOfWeekNumber)
	{
		case 1:
			dayOfWeekName = "poniedzialek";
			break;
		case 2:
			dayOfWeekName = "woterk";
			break;
		case 3:
			dayOfWeekName = "sroda";
			break;
		case 4:
			dayOfWeekName = "czwartek";
			break;
		case 5:
			dayOfWeekName = "piatek";
			break;
		case 6:
			dayOfWeekName = "sobota";
			break;
		case 7:
			dayOfWeekName = "niedziela";
			break;
		default:
			cout << "Podano nieprawidlowy dzien tygodnia" << endl;
			dayOfWeekName = "niepoprawny dzien tygodnia";
			break;
	}

	cout << dayOfWeekNumber << ". dzien tygodnia to " << dayOfWeekName << endl;
}

int main()
{
	zad1();
	zad2();
	zad3();
}
