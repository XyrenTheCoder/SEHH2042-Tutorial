// SEHH2042 In-class Exercises (Tutorial Work)
// Program template file
// Do not modify the given codes

// =======================================
// Insert more header files when necessary
// =======================================
#include <iostream>
#include <cmath>
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
	int deg;
	double sine, cosine, rad;
	const double PI = 3.14159265;

	cout << "Degree\t\tSin\t\tCos" << endl;

	for (deg=0; deg<=360; deg+=10) {
		rad = deg * (PI/180);
		sine = sin(rad);
		cosine = cos(rad);

		cout << deg << "\t\t" << sine << "\t\t" << cosine << endl;
	}
}

void Q2()
{
	int deg;
	double sine, cosine, rad;
	const double PI = 3.14159265;

	cout << "Degree\t\tSin\t\tCos" << endl;

	for (deg=0; deg<=360; deg+=10) {
		rad = deg * (PI/180);
		sine = sin(rad);
		cosine = cos(rad);

		cout << fixed << setw(7) << setprecision(4) << noshowpos << deg << "\t\t";
		cout << showpos << sine << "\t\t" << cosine << endl;
	}
}


double integerPower(float base, int exp) {
	double out = 1.0;
	
	if (exp > 0) {
		for (int i=0; i<exp; i++) {
			out *= base; 
		}
	} else if (exp == 0) {
		for (int i=0; i<exp; i++) {
			out = 1;
		}
	} else {
		exp = exp*-1;
		for (int i=0; i<exp; i++) {
			out *= base;
		}
		out = 1/out;
	}

	return out;
}

void Q3()
{
	float basev;
	int expv;

	cout << "Enter the base value: ";
	cin >> basev;

	cout << "Enter the exponential value: ";
	cin >> expv;

	cout << basev << " to the power of " << expv << " is " << integerPower(basev, expv);
}


void nChar(int n, char c) {
	for (int i = 0; i < n; i++)
		cout << c;
}

void Q4()
{
	// pattern a
	for (int i=1; i<=5; i++) {
		nChar(i, '*');
		cout << endl;
	}
	
	// pattern b
	for (int i=1; i<=5; i++) {
        nChar(5-i, ' ');
		nChar(i, '*');
		cout << endl;
	}

	// pattern c
	for (int i=1; i<=5; i++) {
		nChar(5-i, ' ');
		nChar(i, '*');
		nChar(i-1, '*');
		nChar(10/4-i, ' ');
		cout << endl;
	}

	// pattern d
	for (int i=1; i<=5; i++) {
		nChar(5-i, ' ');
		nChar(i, '*');
		nChar(i-1, '*');
		nChar(10/4-i, ' ');
		cout << endl;
	}
	for (int i=4; i>=1; i--) {
		nChar(5-i, ' ');
		nChar(i, '*');
		nChar(i-1, '*');
		nChar(10/4-i, ' ');
		cout << endl;
	}

	// pattern e
	for (int j=0; j<3; j++) {
		for (int i=1; i<=5; i++) {
			nChar(5-i, ' ');
			nChar(i, '*');
			nChar(i-1, '*');
			nChar(10/4-i, ' ');
			cout << endl;
		}
    	}
}

void Q5()
{	
	cout << "hi theres no q5 again so bye";
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
