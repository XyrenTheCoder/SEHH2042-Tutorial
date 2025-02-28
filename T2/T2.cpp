// SEHH2042 In-class Exercises (Tutorial Work)
// Program template file
// Do not modify the given codes

// =======================================
// Insert more header files when necessary
// =======================================
#include <iostream>
#include <iomanip>
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
	int x, y, z;

	cout << "Enter a two-digit integer (00 - 99): ";
	cin >> x;

	y = x / 10; // first digit
	z = x % 10; // second digit

	if (y > z) {
		cout << y << " > " << z;
	} else if (y < z) {
		cout << y << " < "	<< z;
	} else {
		cout << y << " = " << z;
	}

}

void Q2()
{
	int x, y;

	cout << "Input x: ";
	cin >> x;

	cout << "Input y: ";
	cin >> y;

	if (y % x == 0) {
		cout << x << " is a factor of " << y;
	} else {
		cout << x << " is not a factor of " << y;
	}
}

void Q3()
{
	int year;

	cout << "Input a year: ";
	cin >> year;

	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
		cout << "Is " << year << " a leap year? Yes";
	} else {
		cout << "Is " << year << " a leap year? No";
	}
}

void Q4()
{
	double x, y, z;

	cout << "Input side x: ";
	cin >> x;

	cout << "Input side y: ";
	cin >> y;

	cout << "Input side z: ";
	cin >> z;

	if (x*x + y*y != z*z) {
		cout << "Error: Not right-angled triangle";
	} else {
		double sin = x / z;
		double cos = y / z;
		double tan = x / y;

		cout << setw(10) << "sinA";
		cout << setw(10) << "cosA";
		cout << setw(10) << "tanA" << endl;

		cout << fixed << setw(10) << setprecision(3) << sin;
		cout << fixed << setw(10) << setprecision(3) << cos;
		cout << fixed << setw(10) << setprecision(3) << tan;
	}
}

void Q5()
{
	double p;
	int customer_type = 0;

	cout << "What is the principal value? ";
	cin >> p;

	cout << "Please enter the customer type: ";
	cin >> customer_type;

	cout << "Interest payable after one year: ";

	switch (customer_type) {
		case 0: cout << "$" << p * 0.005; break;
		case 1: cout << "$" << p * 0.008; break;
		case 2: cout << "$" << p * 0.01; break;
		case 3: cout << "$" << p * 0.012; break;
		case 4: cout << "$" << p * 0.02; break;
		default: cout << "Error in customer type"; break;
	}
}

void Q6()
{
	int date[3] = {};

	cout << "Input day month year: ";
	cin >> date[0] >> date[1] >> date[2];

	cout << date[0] << "-" << date[1] << "-" << date[2]; // formatted date

	if ((date[0] == 0) || (date[1] == 0) || (date[2] == 0) || (date[1] > 12)) { // values cant be 0 or month more than 12
		cout << " is incorrect"; 
	} else {
		if (date[1] == 2) { // is feb
			if (((date[2] % 4 == 0) && (date[2] % 100 != 0)) || (date[2] % 400 == 0)) { // is a leap year
				if (date[0] > 29) { // is leap feb, no more than 29 days
					cout << " is incorrect";
				} else {
					cout << " is correct";
				}
			} else { // is not a leap year
				if (date[0] > 28) { // is non-leap feb, no more than 28 days
					cout << " is incorrect";
				} else {
					cout << " is correct";
				}
			}
		} else { // is not feb
			if (date[1] >= 8) { // invert condition after aug
				if (date[1] % 2 == 0) {
					if (date[0] > 31) {
						cout << " is incorrect";
					} else {
						cout << " is correct";
					}
				} else {
					if (date[0] > 30) {
						cout << " is incorrect";
					} else {
						cout << " is correct";
					}
				}
			} else if (date[1] % 2 != 0) { // month is odd, no more than 31 days
				if (date[0] > 31) {
					cout << " is incorrect";
				} else {
					cout << " is correct";
				}
			} else { // month is even, no more than 30 days
				if (date[0] > 30) {
					cout << " is incorrect";
				} else {
					cout << " is correct";
				}
			}
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
		case '6': Q6(); break;
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
