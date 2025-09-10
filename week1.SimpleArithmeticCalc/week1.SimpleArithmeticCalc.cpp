// week1.SimpleArithmeticCalc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	//declare variables
	char operation;
	int num1;
	int num2;
	double result;
	//get user input
	cout << "What arithmetic operation would you like to perform? \nPlease enter the symbol (+,-,*,/)\n";
	cin >> operation;
	cout << "Please enter the first number: \n";
	cin >> num1;
	cout << "Please enter the second number: \n";
	cin >> num2;
	//perform calculation based on user input
	switch (operation)
	{
	case '+':
		result = num1 + num2;
		cout << "The result is: " << result << endl;
		break;
	case '-':
		result = num1 - num2;
		cout << "The result is: " << result << endl;
		break;
	case '*':
		result = num1 * num2;
		cout << "The result is: " << result << endl;
		break;
	case '/':
		if (num2 != 0) {
			result = num1 / num2;
			cout << "The result is: " << result << endl;
		}
		else {
			cout << "Error: Division by zero is not allowed." << endl;
		}
		break;

	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
