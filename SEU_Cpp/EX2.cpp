//EX2: numbercompare.cpp

#include <iostream> // allows program to perform input and output
using std::cout; // program uses cout
using std::endl; // program uses endl
using std::cin; // program uses cin

void Print(int sum, float average, int product, int largest, int smallest) {
	cout << "sum:" << sum << "\n" << "average:" << average << "\n" << "product:" << product << "\n"
		<< "largest:" << largest << "\n" << "smallest:" << smallest << "\n" << endl;

}

int main()
{
	int number1; // first integer read from user
	int number2; // second integer read from user
	int number3; // third integer read from user
	int smallest; // smallest integer read from user
	int largest; // largest integer read from user
	cout << "Input three different integers: "; // prompt
/* Write a statement to read in values for number1, number2 and
number3 using a single cin statement */
	cin >> number1 >> number2 >> number3;
	largest = number1; // assume first integer is largest
/* Write a statement to determine if number2 is greater than
largest. If so assign number2 to largest */
	if (number2 > largest)
		largest = number2;
	
/* Write a statement to determine if number3 is greater than
largest. If so assign number3 to largest */
	if (number3 > largest)
		largest = number3;
		
	smallest = number1; // assume first integer is smallest

/* Write a statement to determine if number2 is less than
smallest. If so assign number2 to smallest */
	if (number2 <smallest)
		smallest = number2;
		
/* Write a statement to determine if number3 is less than
smallest. If so assign number3 to smallest */
	if (number3 < smallest)
		smallest = number3;
/* Write an output statement that prints the sum, average,
product, largest and smallest */
	int sum = number1 + number2 + number3;
	float average = sum / 3;
	int product = number1 * number2 * number3;

	Print(sum, average, product, largest, smallest);
		
	return 0; // indicate successful termination
} // end main
