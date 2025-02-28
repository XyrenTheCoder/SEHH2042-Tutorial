// SEHH2042 In-class Exercises (Tutorial Work)
// Program template file
// Do not modify the given codes

// =======================================
// Insert more header files when necessary
// =======================================
#include <iostream>
using namespace std;

void showInfo()
{
	// Fill in your personal particulars below
	cout << "Name      : HIDDEN\n";
	cout << "Student ID: HIDDEN\n";
	cout << "Class     : B06\n";
}

void Q1()
{
	int x, ans = 31;

	cout << "I have a number between 1 and 100.\nCan you guess my answer?" << endl;

	do {
		cout << "Guess: ";
		cin >> x;

		if (x == ans) {
			cout << "Excellent! Correct guess." << endl;
		} else if (x > ans) {
			cout << "Too high. Try again." << endl;
		} else {
			cout << "Too low. Try again." << endl;
		}
	} while (x != ans);
}

void Q2()
{
	int n, ans;

	cout << "n: ";
	cin >> n;

	cout << n << "!" << " = ";

	if (n == 0) {
		ans = 1;
	} else if (n < 0) {
		cout << "Value of n cannot be negative";
	} else {
		for (int i=n; i>1; i--) {
			n = n * (i-1);
		}
		cout << n;
	}
}

void Q3()
{
	int valueA, valueB, c, sum = 0;

	cout << "Please input value A: ";
	cin >> valueA;

	cout << "Please input value B: ";
	cin >> valueB;

	if (valueA > valueB) {
		c = valueB;
		for (c; c<=valueA; c++) {
			if (c % 2 == 0) { // even
				continue;
			} else { // odd
				sum = sum + c;
			}
		}
		cout << "Sum of odd integers from " << valueB << " to " << valueA << " is " << sum;
	} else if (valueA < valueB) {
		c = valueA;
		for (c; c<=valueB; c++) {
			if (c % 2 == 0) { // even
				continue;
			} else { // odd
				sum = sum + c;
			}
		}
		cout << "Sum of odd integers from " << valueA << " to " << valueB << " is " << sum;
	} else {
		if ((valueA % 2 != 0) || (valueB % 2 != 0)) { // odd
			cout << "They are the same number!\n";
			cout << "Sum of odd integers from " << valueA << " to " << valueB << " is " << valueA;
		} else {
			cout << "They are the same number! (and they arent even odd)\n";
			cout << "Sum of odd integers from " << valueA << " to " << valueB << " is 0";
		}
	}
}

void Q4()
{
	double base, ans;
	int exp;

	cout << "Enter the base value: ";
	cin >> base;

	cout << "Enter the exponent value: ";
	cin >> exp;

	if (exp == 0) {
		ans = 1;
	} else if (exp < 0) {
		for (int i=-1; i>=exp; i--) {
			ans /= base;
		}
			
	} else {
		for (int i=1; i<=exp; i++) {
			ans *= base;
		}
	}
	cout << base << " to the power " << exp << " is " << ans;
}

void Q5()
{
	int x;
	bool prime = true;

	cout << "Input a positive integer: ";
	cin >> x;

	if (x < 0) {
		cout << "That's negative!";
	} else {
		if ((x == 0) || (x == 1)) {
			prime = false;
		} else {
			for (int i = 2; i <= x/2; ++i) {
				if (x % i == 0) {
					prime = false;
					break;
				}
			}
		}

		if (prime) {
			cout << x << " is a prime number";
		} else {
			cout << x << " is not a prime number";
		}
	}
}

// IMPORTANT: DO NOT MODIFY main()
int main()
{
	char prog_choice;

	do {
		cout << "\n\n";
		cout << "Program Selection Menu" << endl;
		cout << "---------------------------------------" << endl;
		cout << "Enter question number ('q' to quit): ";
		cin >> prog_choice;
		cout << "\n\n";

		switch (prog_choice) {
		case '0': showInfo(); break;
		case '1': Q1(); break;
		case '2': Q2(); break;
		case '3': Q3(); break;
		case '4': Q4(); break;
		case '5': Q5(); break;
		case 'q': break;
		default:
			cout << "No such question " << prog_choice << endl;
			break;
		}
	} while (prog_choice != 'q');

	cout << "Program terminates. Good bye!" << endl;
	return 0;
}
// END
