// SEHH2042 Assignment 1
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
	/* odd version

	Display the following items:
	• Count the integer if it is positive and odd.
	• Count the integer if it is negative and even.
	• The sum of the above integers */

	// init
	int input, posodd = 0, negeven = 0, sum = 0;
    
	do {
		cin >> input; // user input
		
		if ((input > 0) && (input % 2 != 0)) { // positive and odd
		    posodd++;
		    sum = sum + input;

		} else if ((input < 0) && (input % 2 == 0)) { // negative and even
		    negeven++;
		    sum = sum + input;

		} else if (input == 0) {
			continue; // ignore as 0 is not counted
		}

	} while (input != 0); // stop when 0 is detected

	// output
	cout << posodd << endl;
	cout << negeven << endl;
	cout << sum;
}

void Q2()
{
	/* even version

	calculate the total cost for a car charging session

	• The charger type as either “fast” (f) or “normal” (n)
	• The start time of the charging session (in hour)
	• The end time of the charging session (in hour)
	
	data:
		charging:
			8 - 18 [f: 70, n: 22]
			18 - 22 [f: 50 , n: 16]
			22 - 8 [f: 10, n: 6]
		parking: 22
			type = f, hour - 1
			type = n, hour - 4 
		* 0.85 if charging > 100 */

	// init
	double total, charging = 0, parking = 22;
	char type;
	int start, end, phr = 0;

	// user input
	cin >> type;
	cin >> start;
	cin >> end; 
	
	if (start > end) {
		end += 24;
	}

	for (int i=start; i<end; i++) {
		int j = i % 24; // turn 24 hours back to 12 hours form

		if (type == 'f') {
			if ((j >= 8) && (j < 18)) { // 0800-1800
				charging += 70.0;
			} else if ((j >= 18) && (j < 22)) { // 1800-2200
				charging += 50.0;
			} else { // 2200-0800
				charging += 10.0;
			}
			phr += 1;

		} else if (type == 'n') {	
			if ((j >= 8) && (j < 18)) { // 0800-1800
				charging += 22.0;
			} else if ((j >= 18) && (j < 22)) { // 1800-2200
				charging += 16.0;
			} else { // 2200-0800
				charging += 6.0;
			}
			phr += 1;

		} else {
			cout << "Charging type '" << type << "' does not exist!";
			break;
		} 
	}

	if (type == 'f') {
		phr -= 1; // first hour free
	} else if (type == 'n') {
		phr -= 4; // first 4 hours free
	}

	if (charging > 100) {
		total = (charging * 0.85) + (parking * phr);
	} else {
		total = charging + (parking * phr);
	}

  // output
	cout << fixed << setprecision(2) << total; // output in 2 d.p.
}

void Q3()
{
	/* odd version
	print a P according to size */

	// init
	int size;

	// user input
	cin >> size;

	if ((size == 0) || (size < 0) || (size % 2 == 0)) {
		cout << "E";
	} else {
		for (int i=1; i<=size; i++) { // row
			for (int j=1; j<=size; j++){ // col
				if ((i == 1) || (i == (size+1)/2) || (j == 1) || (j == size) && (i < (size+1)/2)) {
					cout << "*";
				} else {
					cout << " ";
				}
			}
			cout << endl;
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
