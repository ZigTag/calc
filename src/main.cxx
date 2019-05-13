#include <iostream>
#include <cmath>

double askNumber()
{
	std::cout << "Please enter a double: ";
	double x;
	std::cin >> x;
	return x;
}
//Asks a integer
int askInt()
{
	std::cout << "Please enter a integer: ";
	int x;
	std::cin >> x;
	return x;
}
//Asks which operator should be used
char askOperator()
{
	std::cout << "Please enter an operator, type h for the availible operators: ";
	char x;
	std::cin >> x;
	return x;
}

void addNumbers()
{
	double x{ askNumber() };
	double y{ askNumber() };
	std::cout << x << " + " << y << " = " << x + y << "\n";
}

void subtractNumbers()
{
	double x{ askNumber() };
	double y{ askNumber() };
	std::cout << x << " - " << y << " = " << x - y << "\n";
}

void multiplyNumbers()
{
	double x{ askNumber() };
	double y{ askNumber() };
	std::cout << x << " * " << y << " = " << x * y << "\n";
}

void divideNumbers()
{
	double x{ askNumber() };
	double y{ askNumber() };
	std::cout << x << " / " << y << " = " << x / y << "\n";
}

void divideNumbersWithRemainder()
{
	int xInt{ askInt() };
	int yInt{ askInt() };
	std::cout << xInt << " / " << yInt << " = " << xInt / yInt << "\n";
	std::cout << "Remainder: " << xInt % yInt << "\n";
}

void powerOf()
{
	int x{ askInt() };
	int y{ askInt() };
	std::cout << x << " ^ " << y << " = " << pow(x, y) << "\n";
}

void percentOf()
{
	double x{ askNumber() };
	std::cout << "The percentage form of " << x << " is " << x / 100 << "\n";
}

void doCalculations()
{
	char z{ askOperator() };

	if (z == 'h')
		std::cout << "The availible operators are +, -, *, /, %, ^, #.\n"
				  << "Please restart the program.\n";
	else if (z == '+')
		addNumbers();
	else if (z == '-')
		subtractNumbers();
	else if (z == '*')
		multiplyNumbers();
	else if (z == '/')
		divideNumbers();
	else if (z == '%')
		divideNumbersWithRemainder();
	else if (z == '^')
		powerOf();
	else if (z == '#')
		percentOf();
	else
		std::cout << "You have entered an incorrect symbol, please restart the program";
}

int main()
{
	std::cout << "Welcome to the absoloute calculator\n";
	doCalculations();
	return 0;
}
