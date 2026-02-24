// Overloaded add() functions for floating point numbers
#include <iostream>
float add(float a, float b) {
	return a + b;
}

double add(double a, double b) {
	return a + b;
}

int main() {
	float f1, f2;
	double d1, d2;

	std::cout << "Enter two float values: ";
	std::cin >> f1 >> f2;
	std::cout << "Enter two double values: ";
	std::cin >> d1 >> d2;

	float floatSum = add(f1, f2);
	double doubleSum = add(d1, d2);

	std::cout << "Sum of floats: " << floatSum << std::endl;
	std::cout << "Sum of doubles: " << doubleSum << std::endl;

	return 0;
}