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
	cout << "Name      : Hidden\n";
	cout << "Student ID: Hidden\n";
	cout << "Class     : B06\n";
}

void Q1()
{
	int x;

	while (true) {
		cout << "Enter a positive integer: ";
		cin >> x;

		if (x < 0) {
			cout << "Only positive integer is accepted. Program ends.";
			break;
		} else {
			cout << "Factor of " << x << ": ";
			for (int i=1; i<=x; i++) {
				if (x % i == 0) {
					if (i == x) {
						cout << i << " " << endl;
					} else {
						cout << i << " ";
					}
				} else {
					continue;
				}
			}
		}
	}
}

void Q2()
{
	int y = 0;

	for (int x=1; x<=200; x++) {
	    bool prime = true;
		if (x == 1) {
			prime = false;
		} else {
			for (int i=2; i<=x/2; ++i) {
				if (x % i == 0) {
					prime = false;
					break;
				} 
			}

			if (prime) {
				cout << fixed << setw(5) << x;
				y++;
				if (y % 10 == 0) {
					cout << endl;
				}
			}
		}
	}
}

void Q3()
{
	double pi10, pi100, pi1k, pi10k, pi100k;
	int i, j=0;

	// for 10 terms:
	for (i=1; i<=20; i++) { // 10*2
		if (i % 2 != 0) { // odd
			j++;
			
			if (j % 2 != 0) {
    			pi10 = pi10 + 4/ static_cast<double>(i);
    		} else {
    			pi10 = pi10 - 4/ static_cast<double>(i);
    		}
		}
	}

	// for 100 terms:
	for (i=1; i<=200; i++) { // 100*2
		if (i % 2 != 0) { // odd
			j++;
			
			if (j % 2 != 0) {
    			pi100 = pi100 + 4/ static_cast<double>(i);
    		} else {
    			pi100 = pi100 - 4/ static_cast<double>(i);
    		}
		}
	}
	
	// for 1000 terms:
	for (i=1; i<=2000; i++) { // 1000*2
		if (i % 2 != 0) { // odd
			j++;
			
			if (j % 2 != 0) {
    			pi1k = pi1k + 4/ static_cast<double>(i);
    		} else {
    			pi1k = pi1k - 4/ static_cast<double>(i);
    		}
		}
	}

	// for 10000 terms:
	for (i=1; i<=20000; i++) { // 10000*2
		if (i % 2 != 0) { // odd
			j++;
			
			if (j % 2 != 0) {
    			pi10k = pi10k + 4/ static_cast<double>(i);
    		} else {
    			pi10k = pi10k - 4/ static_cast<double>(i);
    		}
		}
	}

	// for 100000 terms:
	for (i=1; i<=200000; i++) { // 100000*2
		if (i % 2 != 0) { // odd
			j++;
			
			if (j % 2 != 0) {
    			pi100k = pi100k + 4/ static_cast<double>(i);
    		} else {
    			pi100k = pi100k - 4/ static_cast<double>(i);
    		}
		}
	}

	cout << fixed << setw(10) << "Terms" << setw(20) << "Value of PI" << endl;
	cout << fixed << setw(10) << "-----" << setw(20) << "-----------" << endl;

	cout << fixed << setw(10) << "10" << setw(20) << setprecision(15) << pi10 << endl;
	cout << fixed << setw(10) << "100" << setw(20) << setprecision(15) << pi100 << endl;
	cout << fixed << setw(10) << "1000" << setw(20) << setprecision(15) << pi1k << endl;
	cout << fixed << setw(10) << "10000" << setw(20) << setprecision(15) << pi10k << endl;
	cout << fixed << setw(10) << "100000" << setw(20) << setprecision(15) << pi100k << endl;
}

void Q4()
{
	int size;

	cout << "Pattern size: ";
	cin >> size;

	// pattern a
	for (int i=1; i<=size; i++) { // row
		for (int j=1; j<=size; j++){ // col
			if ((i == 1) || (j == 1) || (j == size) || (i == size)) {
                cout << "*";
			} else {
			    cout << " ";
			}
		}
		cout << endl;
	}

	// pattern b
	for (int i=1; i<=size; i++) { // row
		for (int j=1; j<=size; j++){ // col
			if ((i == 1) || (i == j) || (i == size)) {
                cout << "*";
			} else {
			    cout << " ";
			}
		}
		cout << endl;
	}

	// pattern c
	for (int i=1; i<=size; i++) { // row
		for (int j=1; j<=size; j++){ // col
			if ((i == 1) || (i == size-j+1) || (i == size)) {
                cout << "*";
			} else {
			    cout << " ";
			}
		}
		cout << endl;
	}

	// pattern d
	for (int i=1; i<=size; i++) { // row
		for (int j=1; j<=size; j++){ // col
			if ((i == 1) || (i == j) || (i == size-j+1) || (i == size)) {
                cout << "*";
			} else {
			    cout << " ";
			}
		}
		cout << endl;
	}

	// pattern e
	for (int i=1; i<=size; i++) { // row
		for (int j=1; j<=size; j++){ // col
			if ((i == 1) || (i == j) || (i == size-j+1) || (j == 1) || (j == size) || (i == size)) {
                cout << "*";
			} else {
			    cout << " ";
			}
		}
		cout << endl;
	}
}

void Q5(int argc, char *argv[])
{
	cout << "hi theres no q5, bye!" << endl;
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
