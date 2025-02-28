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
	cout << "This is tutorial 1";
}

void Q2()
{
	double cm, m;

	cout << "Input meter: ";
	cin >> m;

	cm = m * 100;

	cout << m << "m = " << cm << "cm";
}

void Q3()
{
	const double PI = 3.14159265;
	double r, h, v;

	cout << "Enter the radius (in cm): ";
	cin >> r;

	cout << "Enter the height (in cm): ";
	cin >> h;

	v = (PI * r * r * h) / 3;

	cout << "The volume of the cone is " << v << "cm^3";
}

void Q4()
{
	int x;
	double ans;

	cout << "Input the value of x: ";
	cin >> x;

	ans = (((double)3 + 4 * x) / 10) - (double)10 * ((x - 2) * (x - 2)) / (x - 3);
	ans = ans * ans;

	cout << "The answer is " << ans;
}

void Q5()
{
	int num, first, second;

	cout << "Enter a two-digit integer (00 - 99): ";
	cin >> num;

	first = num / 10;
	second = num % 10;

	cout << "The two-digits are " << first << " and " << second;
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
