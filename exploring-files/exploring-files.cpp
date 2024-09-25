#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void writing_file()
{
    ofstream fileToWrite("test_file.txt");

    fileToWrite << "Hello world" << endl;

    fileToWrite.close();
}

void reading_file()
{
    ifstream readFile("test_file.txt");

    if (!readFile.is_open()) {
        cerr << "Error opening the file!" << endl;
    }

    string line;

    while (getline(readFile, line))
    {
        cout << line << endl;
    }

    readFile.close();
}

int main()
{
    reading_file();
}
