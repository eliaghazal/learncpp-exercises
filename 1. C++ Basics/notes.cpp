// Every C++ program must have a special function named main (all lower case letters).

// A statement is an instruction in a computer program that tells the computer to perform an action.

// A function is a collection of statements that executes sequentially.

// main is the name of the function that all programs must have.

// The statements inside main() are executed in sequential order.

//
// Print 'Hello World'
#include <iostream> 

int main()
{
  std::cout << "Hello World!";
  return 0; // This particular return statement returns the integer value 0 to the operating system, which means “everything went okay!”.
}

// Numeric values: 5, 10, 9, ...
// Character values: 'H', '$', 'E', ...
// Text values: "Hello", "H", "Elia", ...

// An object is used to store a value in memory. A variable is an object that has a name (identifier).

// A definition statement can be used to tell the compiler that we want to use a variable in our program.
int x, y; // define a variable named x and another named y (of type int)

// Once a variable has been given a value, the value of that variable can be printed via std::cout
#include <iostream>

int main()
{
  int width;
  width = 5;

  std::cout << width;
  return 0;
}

// Initialization provides an initial value for a variable. Think “initial-ization”.
int a;         // default-initialization (no initializer)

// Traditional initialization forms:
int b = 5;     // copy-initialization (initial value after equals sign)
int c ( 6 );   // direct-initialization (initial value in parenthesis)

// Modern initialization forms (preferred): (When we see curly braces, we know we’re list-initializing an object.)
int d { 7 };   // direct-list-initialization (initial value in braces)
int e {};      // value-initialization (empty braces)

// Output a newline whenever a line of output is complete.
#include <iostream> // for std::cout and std::endl

int main()
{
    std::cout << "Hi!" << std::endl; // std::endl will cause the cursor to move to the next line
    std::cout << "My name is Alex." << std::endl;

    return 0;
}

// Prefer \n over std::endl when outputting text to the console.
#include <iostream> // for std::cout

int main()
{
    int x{ 5 };
    std::cout << "x is equal to: " << x << '\n'; // single quoted (by itself) (conventional)
    std::cout << "Yep." << "\n";                 // double quoted (by itself) (unconventional but okay)
    std::cout << "And that's all, folks!\n";     // between double quotes in existing text (conventional)
    return 0;
}

// std::cin (which stands for “character input”) reads input from keyboard.
#include <iostream>  // for std::cout and std::cin

int main()
{
    std::cout << "Enter two numbers separated by a space: ";

    int x{}; // define variable x to hold user input (and value-initialize it)
    int y{}; // define variable y to hold user input (and value-initialize it)
    std::cin >> x >> y; // get two numbers and store in variable x and y respectively

    std::cout << "You entered " << x << " and " << y << '\n';

    return 0;
}


// std::cin is buffered because it allows us to separate the entering of input from the extract of input. We can enter input once and then perform multiple extraction requests on it.

// Take care to avoid all situations that result in undefined behavior, such as using uninitialized variables.

// Keywords and naming identifiers: https://www.learncpp.com/cpp-tutorial/keywords-and-naming-identifiers/




