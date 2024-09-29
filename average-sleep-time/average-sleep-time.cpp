#include <iostream>

using namespace std;

int main()
{
	char name[32];
	float sleepHours[7];

	cout << "Podaj swoje imie: ";
	cin.getline(name, 32);

	for (int i = 0; i < 7; i++)
	{
		cout << "Podaj ilosc godzin snu w " << i + 1 << ". dniu tygodnia: ";
		cin >> sleepHours[i];
	}

	float avgWorkDays = 0;

	for (int i = 0; i < 5; i++)
	{
		avgWorkDays += sleepHours[i];
	}

	avgWorkDays /= 5;
	
	float avgWeekend = (sleepHours[5] + sleepHours[6]) / 2;
	int sumWeek = 0;

	for (int i = 0; i < 7; i++)
	{
		sumWeek += sleepHours[i];
	}

	float avgWeek = sumWeek / 7;

	cout << name << " srednio spal " << avgWorkDays << "h w dniach pon - pt" << endl;
	cout << name << " srednio spal " << avgWeekend << "h w weekend" << endl;
	cout << name << " srednio spal " << avgWeek << "h w dniach pon - nd" << endl;
	cout << name << " lacznie spal " << sumWeek << "h w dniach pon - nd" << endl;
}
