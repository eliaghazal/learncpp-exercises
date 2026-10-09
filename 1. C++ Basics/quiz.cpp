// Question #1: What is the difference between initialization and assignment? How many times can a variable be initialized or assigned a value?
// Initialization happens when you give a variable an initial value. Assignment is when you give an already initialized variable a new value.

// Question #2: When does undefined behavior occur? What are the consequences of undefined behavior?
// Undefined behavior is when you do something wrong and that would lead to the code to crash or output wrong solutions.

// Write a program that asks the user to enter a number, and then enter a second number. The program should tell the user what the result of adding and subtracting the two numbers is.
// The output of the program should match the following (assuming inputs of 6 and 4):
/* Enter an integer: 6
  Enter another integer: 4
  6 + 4 is 10.
  6 - 4 is 2. */

#include <iostream>

int main()
{
  int x{}, y{};

  std::cout << "Enter an integer: " << "\n";
  std::cin >> x;

  std::cout << "Enter another integer: " << "\n";
  std::cin >> y;

  std::cout << x << "+" << y << "is" << x+y << ".\n";
  std::cout << x << "-" << y << "is" << x-y << ".\n";

  return 0;
}
  
