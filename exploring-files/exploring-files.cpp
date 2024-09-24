#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream testFile("test_file.txt");

    testFile << "Hello world" << endl;

    testFile.close();
}
