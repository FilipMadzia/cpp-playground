#include <iostream>
#include <cstdlib>

using namespace std;

int rand_in_range(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}

int main()
{
    srand(time(0));

    for (int i = 0; i < 10; i++)
    {
        cout << rand_in_range(0, i) << endl;
    }
}
