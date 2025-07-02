#include <iostream>
#include <fstream>

void readFile();
void writeFile();

int main()
{
	bool running = true;

	while (running)
	{
		int option;

		do
		{
			std::cout << "What do you want to do?" << std::endl
				<< "1. Read file" << std::endl
				<< "2. Write file" << std::endl
				<< "3. Exit" << std::endl;

			std::cin >> option;
		} while (option < 1 || option > 3);

		switch (option)
		{
			case 1:
				readFile();
				break;
			case 2:
				writeFile();
				break;
			case 3:
				running = false;
				break;
			default:
				return -1;
		}
	}

	return 0;
}

void readFile()
{
	std::ifstream file("test.txt");
	std::string fileLine;

	while (std::getline(file, fileLine))
	{
		std::cout << fileLine;
	}

	std::cout << std::endl << std::endl;

	file.close();
}

void writeFile()
{
	std::ofstream file("test.txt");
	std::cout << "Enter text to write to file: ";

	std::string input;

	std::cin >> input;

	file << input;

	file.close();
}
