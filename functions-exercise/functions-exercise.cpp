#include <iostream>

using namespace std;

int kukulka(int ile)
{
    for (int i = 0; i < ile; i++)
    {
        cout << "Ku-ku! ";
    }

    return 77;
}

void zad5()
{
    cout << "Filip Madzia 4TP" << endl;

    int m = 20;

    m = kukulka(5);

    cout << endl << "Na koniec m=" << m;
}

long potega(int stopien, long liczba)
{
    long wynik = liczba;

    for (int i = 1; i < stopien; i++)
    {
        wynik *= liczba;
    }

    return wynik;
}

void zad5_1()
{
    cout << "Filip Madzia 4TP" << endl;

    int pocz, koniec;

    cout << "Program na obliczanie poteg liczb calkowitych z zadanego przedzialu" << endl;

    cout << "Podaj poczatek przedzialu: ";
    cin >> pocz;

    cout << "Podaj koniec przedzialu: ";
    cin >> koniec;

    for (int i = pocz; i <= koniec; i++)
    {
        cout << i << " do kwadratu = " << potega(2, i) << " a do szescianu = " << potega(3, i) << endl;
    }
}

void zer(int wart, int& ref)
{
    cout << "\tW funkcji zer przed zerowaniem" << endl;
    cout << "\twart = " << wart << ", ref = " << ref << endl;

    wart = 0;
    ref = 0;

    cout << "\tW funkcji zer po zerowaniu" << endl;
    cout << "\twart = " << wart << ", ref = " << ref << endl;
}

void zad5_4()
{
    cout << "Filip Madzia 4TP" << endl;

    int a = 44, b = 77;

    cout << "Przed wywolaniem funkcji: zer" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    zer(a, b);

    cout << "Po powrocie z funkcji: zer" << endl;
    cout << "a = " << a << ", b = " << b << endl;
}

int main()
{
    //zad5();
    //zad5_1();
    zad5_4();
}
