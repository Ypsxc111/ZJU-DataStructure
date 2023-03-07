//EX4
#include <iostream> // allows program to perform input and output

using std::cout; // program uses cout
using std::endl; // program uses endl
using std::cin; // program uses cin

int main()
{
	int number; // integer read from user
	
	cout << "Enter a five-digit integer: "; // prompt
	cin >> number; // read integer from user
	
/* Write a statement to print the left-most digit of the
5-digit number */
	cout << number / 10000 << "   ";
/* Write a statement that changes number from 5-digits
to 4-digits */
	number %= 10000;
/* Write a statement to print the left-most digit of the
4-digit number */
	cout << number / 1000 << "   ";
/* Write a statement that changes number from 4-digits
to 3-digits */
	number %= 1000;
/* Write a statement to print the left-most digit of the
3-digit number */
	cout << number / 100 << "   ";
/* Write a statement that changes number from 3-digits
to 2-digits */
	number %= 100;
/* Write a statement to print the left-most digit of the
2-digit number */
	cout << number / 10 << "   ";
/* Write a statement that changes number from 2-digits
to 1-digit */
	number %= 10;
	cout << number << endl;
	
	return 0; // indicate successful termination
	
} // end main
