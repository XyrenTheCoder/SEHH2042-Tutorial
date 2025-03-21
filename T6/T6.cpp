// SEHH2042 In-class Exercises (Tutorial Work)
// Program template file
// Do not modify the given codes

// =======================================
// Insert more header files when necessary
// =======================================
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void showInfo()
{
	// Fill in your personal particulars below
	cout << "Name      : HIDDEN\n";
	cout << "Student ID: HIDDEN\n";
	cout << "Class     : B06\n";
}

// q1 proto
double hypoten(double, double);

void Q1()
{
	double side1, side2;

	cout << "Please enter the length of first side: ";
	cin >> side1;

	cout << "Please enter the length of second side: ";
	cin >> side2;

	cout << "Hypotenuse of a " << side1 << " by " << side2 << " right triangle is " << hypoten(side1,side2);

}

// q1 def
double hypoten(double x, double y) {
	double z;

	z = sqrt(x*x + y*y);
	return z;
}


// q2 proto
float sumAvg(int, int, int &, float &);

void Q2()
{
	int lower, upper, sum;
	float average;

	cout << "Enter the lower bound: ";
	cin >> lower;
	cout << "Enter the upper bound: ";
	cin >> upper;

	sumAvg(lower, upper, sum, average);

	cout << "From " << lower << " to " << upper << ":\n";
	cout << "Sum     = " << sum << endl;
	cout << "Average = " << average << endl;
}

// q2 def
float sumAvg(int lower, int upper, int &sum, float &average) {
	int j = 0;
	sum = 0;

	for (int i=lower; i<=upper; i++) {
		sum = sum + i;
		j++;
	}
	average = (float)sum / j;

	return sum, average;
}


// q3 proto
double calcPI(int &);

// global variable because i didnt manage to make a local one work
int i = 1, j = 0;
double pi = 0;

void Q3()
{
	int terms;
	cout << "How many terms for PI: ";
	cin >> terms;

	cout << "PI with " << terms << " terms is " << fixed << setprecision(15) << calcPI(terms);
}

// q3 def
double calcPI(int &t) {
	/* iterative approach from T4:

	double pi;
	int i = 1, j = 0;
	
	for (i=1; i<=t*2; i++) {
		if (i % 2 != 0) { // odd
			j++;
			
			if (j % 2 != 0) {
    			pi = pi + 4/ static_cast<double>(i);
    		} else {
    			pi = pi - 4/ static_cast<double>(i);
    		}
		}
	}*/

	if (i % 2 != 0) { // odd
		j++;
		
		if (j % 2 != 0) {
			pi = pi + 4/ static_cast<double>(i);
		} else {
			pi = pi - 4/ static_cast<double>(i);
		}
	}

	if (t == 1) {
		return pi;
	} else {
		i = i + 2;
		t--;
		return calcPI(t);
	}
}


// q4 proto
void printBinary(int);

void Q4()
{
	int num;

	cout << "Input a positive decimal integer: ";
	cin >> num;

	cout << "The binary version is ";
	printBinary(num);
	cout << endl;

	return 0;
}

// q4 def
void printBinary(int n){
    if (n == 0){
        return;
    }
    printBinary(n / 2);
    cout << (n % 2);
}


void Q5()
{
	cout << "hi you again, theres no q5 lol";
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
