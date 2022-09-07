/*
* 4-Digit Summation Program uses int/string variables, functions, 
* and a class to read user input, calculate multiple sums with an algorithm, 
* printing the results to the console. 
* 
* A version without classes/custom functions is included at the bottom.
* 
* Forrest Moulin
* September 2022
*/

#include <iostream> // Input output stream (cin, cout)
#include <string>  // For string variables
using namespace std;

class DigitsSummation {
	public: // Integer and string variable initialization
		int sum1, sum2, sum3, digit1, digit2, digit3, digit4;
		string input, sum1Strg, sum2Strg, sum3Strg, 
			printStrg1, printStrg2, printStrg3;

	// Update digit values when function is called. Returns the sum of the digits
	int updateDigits(string str) { 
		// Get each of the string's characters and convert them to integers
		digit1 = stoi(to_string(str[0])) - 48;
		digit2 = stoi(to_string(str[1])) - 48;
		digit3 = stoi(to_string(str[2])) - 48;
		digit4 = stoi(to_string(str[3])) - 48;
		return (digit1 + digit2, digit3 + digit4);
	}

	// Returns string padded with 0s, trimmed to a length of 4 characters
	string trimAndPadZeros(string str) { 
		str.insert(0, "0000"); // Insert leading zeros
		str = str.substr(str.length() - 4, 4); // Trim string to last 4 digits
		return str;
	}
};

int main()
{
	cout << "Lab 2: 4-Digit Summation Program" << endl;
	cout << "By Forrest Moulin" << endl << endl;
	DigitsSummation digSum;
	cout << "Please enter a four-digit whole number:" << endl;
	cin >> digSum.input;
	string input = digSum.input;
	cout << endl << "You entered: " << input << endl << endl;
	// Input validation to check for more than 4 digits
	if (input.length() > 4) {
		cout << "Only 4 digits are needed, "
			"so just the first four digits will be used." << endl << endl;
	}

	// *** SUM 1 *** Concatenate the output string
	digSum.sum1Strg = input.substr(0, 4); // Only use first 4 digits
	digSum.updateDigits(digSum.sum1Strg);
	// Find the sum once the digits are parsed and converted to int
	digSum.sum1 = digSum.digit1 + digSum.digit2 + digSum.digit3 + digSum.digit4; 
	digSum.printStrg1 = "Sum 1 is the sum of the four digits: " +
		to_string(digSum.digit1) + " + " + 
		to_string(digSum.digit2) + " + " + 
		to_string(digSum.digit3) + " + " + 
		to_string(digSum.digit4) + ", which equals " + 
		to_string(digSum.sum1) + ".";

	//  *** SUM 2 *** Concatenate the output string
	digSum.sum2Strg = to_string(digSum.sum1); // Pass in sum1 for sum2 calc
	digSum.sum2Strg = digSum.trimAndPadZeros(digSum.sum2Strg);
	digSum.updateDigits(digSum.sum2Strg);
	// Find the sum once the digits are parsed and converted to int
	digSum.sum2 = digSum.digit1 + digSum.digit2 + digSum.digit3 + digSum.digit4; 
	digSum.printStrg2 = "Sum 2 is the sum of the four digits: " +
		to_string(digSum.digit1) + " + " + 
		to_string(digSum.digit2) + " + " + 
		to_string(digSum.digit3) + " + " + 
		to_string(digSum.digit4) + ", which equals " + 
		to_string(digSum.sum2) + ".";

	//  *** SUM 3 *** Concatenate the output string
	digSum.sum3Strg = to_string(digSum.sum2); // Pass in sum2 for sum3 calc
	digSum.sum3Strg = digSum.trimAndPadZeros(digSum.sum3Strg);
	digSum.updateDigits(digSum.sum3Strg);
	// Find the sum once the digits are parsed and converted to int
	digSum.sum3 = digSum.digit1 + digSum.digit2 + digSum.digit3 + digSum.digit4; 
	digSum.printStrg3 = "Sum 3 is the sum of the four digits: " +
		to_string(digSum.digit1) + " + " + 
		to_string(digSum.digit2) + " + " + 
		to_string(digSum.digit3) + " + " + 
		to_string(digSum.digit4) + ", which equals " + 
		to_string(digSum.sum3) + ".";

	// Print string results and sums to the console
	cout << "String used to calculate Sum 1: " << digSum.sum1Strg << endl;
	cout << digSum.printStrg1 << endl << endl;
	cout << "String used to calculate Sum 2: " << digSum.sum2Strg << endl;
	cout << digSum.printStrg2 << endl << endl;
	cout << "String used to calculate Sum 3: " << digSum.sum3Strg << endl;
	cout << digSum.printStrg3 << endl;
}
/*
* CONSOLE OUTPUT
* Lab 2: 4-Digit Summation Program
* By Forrest Moulin
*
* Please enter a four-digit whole number:
* 5572
*
* You entered: 5572
*
* String used to calculate Sum 1: 5572
* Sum 1 is the sum of the four digits: 5 + 5 + 7 + 2, which equals 19.
*
* String used to calculate Sum 2: 0019
* Sum 2 is the sum of the four digits: 0 + 0 + 1 + 9, which equals 10.
*
* String used to calculate Sum 3: 0010
* Sum 3 is the sum of the four digits: 0 + 0 + 1 + 0, which equals 1.
*
* C:\Users\Forrest\cmpsc121\homework\Lab3-Digits\x64\Debug\Lab3-Digits.exe 
* (process 20996) exited with code 0.
*/

//#include <iostream> // Input output stream (cin, cout)
//#include <string>  // For string variables
//using namespace std;
//int main()
//{
//	// Define string variable and integer variables
//	int sum1, sum2, sum3, digit1, digit2, digit3, digit4;
//	string input, sum1Strg, sum2Strg, sum3Strg,
//		printStrg1, printStrg2, printStrg3;
//
//	cout << "Lab 2 - 4 Digits Summation Program" << endl;
//	cout << "By Forrest Moulin" << endl << endl;
//	// getline(cin, input); // Use getline function if reading entire line
//	cout << "Please enter a four-digit whole number:" << endl;
//	cin >> input;
//	cout << endl << "You entered: " << input << endl << endl;
//	if (input.length() > 4) {
//		cout << "Only 4 digits are needed, "
//			"so just the first four digits will be used." << endl << endl;
//	}
//
//	// *** SUM 1 *** Concatenate the output string
//	sum1Strg = input.substr(0, 4); // Only use first 4 digits
//	// Convert the string input's digits to a char, 
//	// which is converted to a string, then  to int
//	digit1 = stoi(to_string(sum1Strg[0])) - 48;
//	digit2 = stoi(to_string(sum1Strg[1])) - 48;
//	digit3 = stoi(to_string(sum1Strg[2])) - 48;
//	digit4 = stoi(to_string(sum1Strg[3])) - 48;
//	// Find the sum once the digits are parsed and converted to int
//	sum1 = digit1 + digit2 + digit3 + digit4;
//	printStrg1 = "Sum 1 is the sum of the four digits: " + 
//		to_string(digit1) + " + " +
//		to_string(digit2) + " + " +
//		to_string(digit3) + " + " +
//		to_string(digit4) + ", which equals " +
//		to_string(sum1) + ".";
//
//	// *** SUM 2 *** Concatenate the output string
//	sum2Strg = to_string(sum1); // Pass in sum1 for sum2 calculation
//	sum2Strg.insert(0, "0000"); // Insert leading zeros
//	// Trim string to last 4 digits
//	sum2Strg = sum2Strg.substr(sum2Strg.length() - 4, 4);
//	// Convert the string input's digits to a char, 
//	// which is converted to a string, then  to int
//	digit1 = stoi(to_string(sum2Strg[0])) - 48;
//	digit2 = stoi(to_string(sum2Strg[1])) - 48;
//	digit3 = stoi(to_string(sum2Strg[2])) - 48;
//	digit4 = stoi(to_string(sum2Strg[3])) - 48;
//	// Find the sum once the digits are parsed and converted to int
//	sum2 = digit1 + digit2 + digit3 + digit4;
//	printStrg2 = "Sum 2 is the sum of the four digits: " +
//		to_string(digit1) + " + " +
//		to_string(digit2) + " + " +
//		to_string(digit3) + " + " +
//		to_string(digit4) + ", which equals " +
//		to_string(sum2) + ".";
//
//	// *** SUM 3 *** Concatenate the output string
//	sum3Strg = to_string(sum2); // Pass in sum2 for sum3 calculation
//	sum3Strg.insert(0, "0000"); // Insert leading zeros
//	// Trim string to last 4 digits
//	sum3Strg = sum3Strg.substr(sum3Strg.length() - 4, 4);
//	// Convert the string input's digits to a char, 
//	// which is converted to a string, then  to int
//	digit1 = stoi(to_string(sum3Strg[0])) - 48;
//	digit2 = stoi(to_string(sum3Strg[1])) - 48;
//	digit3 = stoi(to_string(sum3Strg[2])) - 48;
//	digit4 = stoi(to_string(sum3Strg[3])) - 48;
//	// Find the sum once the digits are parsed and converted to int
//	sum3 = digit1 + digit2 + digit3 + digit4;
//	printStrg3 = "Sum 3 is the sum of the four digits: " +
//		to_string(digit1) + " + " +
//		to_string(digit2) + " + " +
//		to_string(digit3) + " + " +
//		to_string(digit4) + ", which equals " +
//		to_string(sum3) + ".";
//	// Print string results and sums to the console
//	cout << "String used to calculate Sum 1: " << sum1Strg << endl;
//	cout << printStrg1 << endl << endl;
//	cout << "String used to calculate Sum 2: " << sum2Strg << endl;
//	cout << printStrg2 << endl << endl;
//	cout << "String used to calculate Sum 3: " << sum3Strg << endl;
//	cout << printStrg3 << endl;
//}
