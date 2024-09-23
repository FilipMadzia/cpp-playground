#include <iostream>
#include <string>

using namespace std;

class Game
{
private:
	int money = 100;
public:
	bool isRunning = true;

	string get_money()
	{
		return "$" + to_string(money);
	}

	void start()
	{
		cout << "Game started with " + get_money() << endl;
	}

	void update()
	{
		if (money <= 0) lose_game();
		else if (money >= 1000000) win_game();

		cout << "Game updated" << endl;

		string tmp;

		cin >> tmp;
	}

	void win_game()
	{
		isRunning = false;

		cout << "You win! Your gambling addiction finally paid off and now you have " + get_money() +"! Your family is grateful that you never gave up!" << endl;
	}

	void lose_game()
	{
		isRunning = false;

		cout << "Game over! You gambled all your money and now you have " + get_money() + ". Your family is disappointed in you :(" << endl;
	}
};

int main()
{
	Game game;

	game.start();

	while (game.isRunning)
	{
		game.update();
	}

	return 0;
}