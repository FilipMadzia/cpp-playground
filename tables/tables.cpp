#include <iostream>

using namespace std;

const short TAB_SIZE = 5;

int main()
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
