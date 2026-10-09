// Variables defined inside the body of a function are called local variables. (opposed to global variables)

int add(int x, int y) // function parameters x and y are local variables
{
    int z{ x + y }; // z is a local variable

    return z;
}

// The best practice is that local variables inside the function body should be defined as close to their first use as reasonable
#include <iostream>

int main()
{
	std::cout << "Enter an integer: ";
	int x{};       // x defined here
	std::cin >> x; // and used here

	std::cout << "Enter another integer: ";
	int y{};       // y defined here
	std::cin >> y; // and used here

	int sum{ x + y }; // sum can be initialized with intended value
	std::cout << "The sum is: " << sum << '\n';

	return 0;
}

// Return by value returns a temporary object (that holds a copy of the return value) to the caller. (sometimes called an anonymous object)
#include <iostream>

int getValueFromUser()
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input; // return the value of input back to the caller
}

int main()
{
	std::cout << getValueFromUser() << '\n'; // where does the returned value get stored?

	return 0;
}
