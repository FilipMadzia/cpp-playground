#include <iostream>

using namespace std;

const short TAB_SIZE = 5;

void zad1()
{
	int tab1[TAB_SIZE];
	int tab2[2] = { 5, 10 };
	float tab3[3] = { 3.14, 5.22, 0.23 };
	char tab4[2];

	tab1[0] = 100;
	tab1[1] = 200;
	tab1[2] = 300;
	tab1[3] = 400;
	tab1[4] = 500;

	//tab1[5] = 600;

	cout << "Oto dane zawarte w tab1:" << endl;
	cout << "pierwszy element - " << tab1[0] << endl;
	cout << "drugi element - " << tab1[1] << endl;
	cout << "trzeci element - " << tab1[2] << endl;
	cout << "czwarty element - " << tab1[3] << endl;
	cout << "piaty element - " << tab1[4] << endl;
	cout << "A tak wyglada nieprawidlowy element szosty - " << tab1[5] << endl;
	cout << "A tak wyglada element spoza zakresu tablicy - " << tab1[20] << endl;

	char tab5[TAB_SIZE] = { 'P', 'I', 'Z', 'Z', 'A' };

	cout << tab5 << endl;

	cout << "Pierwsza litera tab5 - " << tab5[0] << endl;
	cout << "Ostatnia litera tab5 - " << tab5[TAB_SIZE - 1] << endl;
}

void zad2()
{
	cout << "Program symuluj¹cy raty kredytu" << endl;

	char borrower[40];
	double credits[3];
	float interestRate[3];
	float toBePaid[3];

	cout << "Podaj imie kredytobiorcy: ";
	cin.getline(borrower, 40);

	cout << "Podaj kwote 1 kredytu dla " << borrower << ": ";
	cin >> credits[0];
	cin.ignore();

	cout << "Podaj kwote 2 kredytu: ";
	cin >> credits[1];
	cin.ignore();

	cout << "Podaj kwote 3 kredytu: ";
	cin >> credits[2];
	cin.ignore();

	cout << "Podaj RRSO 1 kredytu: ";
	cin >> interestRate[0];
	cin.ignore();

	cout << "Podaj RRSO 2 kredytu: ";
	cin >> interestRate[1];
	cin.ignore();

	cout << "Podaj RRSO 3 kredytu: ";
	cin >> interestRate[2];
	cin.ignore();

	toBePaid[0] = credits[0] + credits[0] * (interestRate[0] / 100);
	toBePaid[1] = credits[1] + credits[1] * (interestRate[1] / 100);
	toBePaid[2] = credits[2] + credits[2] * (interestRate[2] / 100);

	cout << endl;

	cout << borrower << " ma do splaty kredyt 1: " << toBePaid[0] << endl;
	cout << borrower << " ma do splaty kredyt 2: " << toBePaid[1] << endl;
	cout << borrower << " ma do splaty kredyt 3: " << toBePaid[2] << endl;

	cout << endl;

	cout << "Suma wszystkich kredytow: " << credits[0] + credits[1] + credits[2] << endl;
	cout << "Suma do splacenia: " << toBePaid[0] + toBePaid[1] + toBePaid[2] << endl;
	cout << "Srednie oprocentowanie kredytow: " << (interestRate[0] + interestRate[1] + interestRate[2]) / 3 << "%" << endl;
}

int main()
{
	zad1();
	zad2();
}
