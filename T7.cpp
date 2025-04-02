// SEHH2042 In-class Exercises (Tutorial Work)
// Program template file
// Do not modify the given codes

// =======================================
// Insert more header files when necessary
// =======================================
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void showInfo()
{
	// Fill in your personal particulars below
	cout << "Name      : Ngai Wing Lam\n";
	cout << "Student ID: 24010571A\n";
	cout << "Class     : B06\n";
}


class Date
{
public:
	Date(int d, int m, int y) {
		setDate(d, m, y);
	}

	void setDate(int d, int m, int y)
	{
		day = d;
		month = m;
		year = y;
	}

	void print()
	{
		cout << day << "-" << month << "-" << year;
	}

private:
	int day;
	int month;
	int year;
};

void Q1()
{
	Date xmas(25, 12, 2013); // must pass the params for constructor
	cout << "xmas is: ";
	xmas.print();
	cout << endl;
}


class Car
{
public:
	Car() {
		speed = 0;
	}

	void showSpeed() {
		cout << "The car is moving at " << speed << " km/h." << endl;
	}

	void accelerate(int a) {
		cout << "Accelerating ... " << endl;
		if (speed + a > 150) {
			a = 150 - speed;
		}
		speed = speed + a;
	}

	void decelerate(int d) {
		cout << "Decelerating ... " << endl;
		if (speed - d <= 0) {
			stop();
		} else {
			speed = speed - d;
		}
	}

	void stop() {
		cout << "Stopping ... " << endl;
		speed = 0;
	}

private:
	int speed;   // speed of the car, in km/h
};

void Q2()
{
	Car myCar;

	myCar.showSpeed();
	myCar.accelerate(70);
	myCar.showSpeed();
	myCar.decelerate(20);
	myCar.showSpeed();
	myCar.accelerate(120);
	myCar.showSpeed();
	myCar.decelerate(100);
	myCar.showSpeed();
	myCar.stop();
	myCar.showSpeed();
}


class Phone
{
public:
	Phone(string b, string o) {
		brand = b;
		os = o;
	}

	void setPrice(double p) {
		if (p < 0) {
			cout << "Price cannot be negative!";
		} else {
			price = p;
		}
	}

	void showConfig() {
		cout << "Brand: \t" << brand << endl;
		cout << "OS: \t" << os << endl;
		cout << "Price: \t$" << fixed << setprecision(2) << price << endl;
	}

private:
	string brand;
	string os;
	double price;
};

void Q3()
{
	Phone iPhone("Apple", "iOS version 6");
	Phone noteTwo("Samsung", "Android 4.1");

	iPhone.setPrice(5588);
	noteTwo.setPrice(4630);

	cout << "Specification of iPhone:" << endl;
	iPhone.showConfig();
	cout << "\nSpecification of Note 2:" << endl;
	noteTwo.showConfig();
}


class Account
{
public:
	Account(double bal) {
		balance = bal;
	}

	void credit(double a) {
		balance = balance + a;
	}

	void debit(double b) {
		balance = balance - b;
	}

	double getBalance() {
		return balance;
	}

	// void tranfer() {

	// }

private:
	double balance;
};

void transfer(Account &a1, Account &a2) 
{
	// (b) code for function body should be inserted here
	double amount;

	cout << "How much to transfer: ";
	cin >> amount;

	double bal1 = a1.getBalance();
	if (bal1 < amount) {
		cout << "Not enough balance!" << endl;
		return;
	} else {
		a1.debit(amount);
		a2.credit(amount);
		cout << "Transfer completed." << endl;
	}
}

void Q4()
{
	Account peter(1000), mary(1500);
	int option;

	cout << fixed << setprecision(2);   // 2 decimal places

	do {
		cout << "\n";
		cout << "Peter's balance: " << peter.getBalance() << endl;
		cout << "Mary's balance:  " << mary.getBalance() << endl;
		cout << "------\n";
		cout << "(1) Transfer money from Peter to Mary\n";
		cout << "(2) Transfer money from Mary to Peter\n";
		cout << "(3) Quit\n";
		cout << "Option: ";
		cin >> option;

		switch (option) {
		case 1: transfer(peter, mary); break;
		case 2: transfer(mary, peter); break;
		case 3: cout << "Bye Bye.\n"; break;
		default: cout << "Incorrect option.\n";
		}
	} while (option != 3);
}


void Q5()
{
	cout << "no q5 and atp im too lazy to make this funni"
}

// IMPORTANT: DO NOT MODIFY main()
int main()
{
	char prog_choice;

	do {
		cout << "\n\n";S
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