#include <iostream>

class Vector
{
public:
	int x, y;

	Vector(int _x, int _y)
	{
		x = _x;
		y = _y;
	}

	Vector operator+(const Vector& other) const
	{
		return Vector(x + other.x, y + other.y);
	}

	Vector operator-() const
	{
		return Vector(-x, -y);
	}

	Vector operator-(const Vector& other) const
	{
		return Vector(x - other.x, y - other.y);
	}

	friend std::ostream& operator<<(std::ostream& os, const Vector& vector)
	{
		os << "Vector(" << vector.x << ", " << vector.y << ")";

		return os;
	}
};

int main()
{
	Vector v1(1, 3);
	Vector v2(2, 4);

	std::cout << "v1: " << v1 << std::endl;
	std::cout << "v2: " << v2 << std::endl;

	Vector v3 = v1 + v2;
	Vector v4 = v1 - v2;
	Vector v5 = -v1;

	std::cout << "v1 + v2: " << v3 << std::endl;
	std::cout << "v1 - v2: " << v4 << std::endl;
	std::cout << "-v: " << v5 << std::endl;

	return 0;
}
