#include <iostream>
#include <string>

using namespace std;

class Game
{
private:
	int money = 100;
public:
	string get_money()
	{
		return "$" + to_string(money);
	}

	void start()
	{
		cout << "Game started with " + get_money() << endl;
	}
};

int main()
{
	Game game;

	game.start();

	return 0;
}