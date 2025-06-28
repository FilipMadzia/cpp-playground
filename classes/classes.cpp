#include <iostream>

class Car
{
	public:
		std::string brand;
		std::string model;
		int productionYear;

		Car(std::string x, std::string y, int z)
		{
			brand = x;
			model = y;
			productionYear = z;
		}

        info()
		{
			std::cout << brand << ", " << model << ", " << productionYear << std::endl;
        }
};

int main()
{
	Car car1("Volkwagen", "Passat", 2001);

	car1.info();

	return 0;
}
