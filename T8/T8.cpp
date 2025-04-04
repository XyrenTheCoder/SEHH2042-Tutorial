// SEHH2042 In-class Exercises (Tutorial Work)
// Program template file
// Do not modify the given codes

// =======================================
// Insert more header files when necessary
// =======================================
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

void showInfo()
{
	// Fill in your personal particulars below
	cout << "Name      : HIDDEN\n";
	cout << "Student ID: HIDDEN\n";
	cout << "Class     : B06\n";
}


void printData(int list[], int size);

void printData(int list[], int size) {
	for (int j=0; j<size; j++) {
	    cout << fixed << setw(5) << list[j];
	    if (j % 5 == 4) {
	        cout << endl;
	    }
	}
}

void Q1()
{
	int inp;

	cout << "How many integers to enter? ";
	cin >> inp;

	int a[20];

	for (int i=0; i<inp; i++) {
		cout << "? ";
		cin >> a[i];
	}
	cout << "The input integers are: " << endl;
	// for (int j=0; j<inp; j++) {
	//     cout << fixed << setw(5) << a[j];
	//     if (j % 5 == 4) {
	//         cout << endl;
	//     }
	// }
	printData(a, inp);
}


void printBar(int list[], int size);

void printBar(int list[], int size) {
	for (int j=0; j<size; j++) {
		for (int k=0; k<list[j]; k++) {
			cout << "*";
		}
		cout << endl;
	}
}

void Q2()
{
	int inp;

	cout << "How many integers to enter? ";
	cin >> inp;

	int a[20];

	for (int i=0; i<inp; i++) {
		cout << "? ";
		cin >> a[i];
	}
	cout << "The bar chart is: " << endl;
	// for (int j=0; j<inp; j++) {
	// 	for (int k=0; k<a[j]; k++) {
	// 		cout << "*";
	// 	}
	// 	cout << endl;
	// }
	printBar(a, inp);
}


void printData3(int list[], int size);

void printData3(int list[], int size) {
	for (int i=0; i<size; i++) {
		list[i] = 1 + rand() % 100;

		cout << setw(5) << list[i];
	    if (i % 5 == 4) {
	        cout << endl;
	    }
	}
}

int largest (int list[], int size);

int largest (int list[], int size) {
	int max = 0;

	for (int i=0; i<size; i++) {
		if (list[i] > max) {
			max = list[i];
		}
	}

	return max;
}

double average(int list[], int size);

double average(int list[], int size) {
	int sum = 0;
	double avg;

	for (int i=0; i<size; i++) {
		sum = sum + list[i];
	}

	avg = (double)sum/size;
	return avg;
}

void Q3()
{
	int seed;
	int arr[20] = {};

	cout << "Please enter the seed value: ";
	cin >> seed;

	srand(seed);

	cout << "The random integers are:" << endl;
	// for (int i=0; i<20; i++) {
	// 	arr[i] = 1 + rand() % 100;

		// sum = sum + arr[i];
		
		// if (arr[i] > max) {
		// 	max = arr[i];
		// }

		// cout << setw(5) << arr[i];
	    // if (i % 5 == 4) {
	    //     cout << endl;
	    // }
	// }

	printData3(arr, 20);

	cout << "The largest number is: " << largest(arr, 20) << endl;
	cout << "The average value is: " << average(arr, 20);
}


void printData4(int list[], int size);

void printData4(int list[], int size) {
	for (int i=0; i<size; i++) {
		list[i] = 1 + rand() % 10;

		cout << setw(5) << list[i];
	    if (i % 10 == 9) {
	        cout << endl;
	    }
	}
}

void maxAppear(int list[], int &max, int &freq);

void maxAppear(int list[], int &max, int &freq) {
	int f[10] = {};

	for (int i=0; i<100; i++) {
        f[list[i]]++; // count frequency
	}
	
	for (int j=0; j<10; j++) {
	    if (f[j] > freq) {
	        freq = f[j];
	        max = j;
	    }
	}
	
	cout << max << " appears the most with " << freq << " times";
}

void Q4()
{
	int seed, max = 0, freq = 0;
	int arr[100] = {};

	cout << "Please enter the seed value: ";
	cin >> seed;

	srand(seed);

	cout << "The random integers are:" << endl;
	// for (int i=0; i<100; i++) {
	// 	arr[i] = 1 + rand() % 10;
	// 	freq[arr[i]]++;

	// 	cout << setw(5) << arr[i];
	//     if (i % 10 == 9) {
	//         cout << endl;
	//     }
	// }

	// for (int j=0; j<10; j++) {
	// 	if (freq[j] > max) {
	// 		max = freq[j];
	// 		maxind = j;
	// 	}
	// }

	printData4(arr, 100);
	
	// cout << maxind << " appears the most with " << max << " times";
	maxAppear(arr, max, freq);
}


void Q5()
{
	cout << "no q5, bye";
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
