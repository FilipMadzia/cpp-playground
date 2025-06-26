#include <iostream>

int fibonacci(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	int n;
	
	std::cout << "Enter n: ";
	std::cin >> n;
	
	std::cout << "Nth number in fibonacci sequence: " << fibonacci(n) << std::endl;
	
	return 0;
}