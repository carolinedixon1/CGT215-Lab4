#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "I am the number wizard, I calculate series with the numbers." << endl;
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}

//finds and prints factorial of a given input number
void factorial() {
	int f_num; //factorial number; function calculates for !f_num
	int f_product = 1; //product of all elements in factorial series

	// Finds viable factorial range value
	cout << "Give me a number: ";
	cin >> f_num;
	while (f_num <= 0) {
		cout << "Nice try. I need a positive nonzero number: ";
		cin >> f_num;
	}

	// Prints out factorial format
	cout << "!" << f_num << " = ";
	// Main loop; prints equation format and finds product of factorial
	for (int n(1); n <= f_num; n++) {
		if (n < f_num) {
			cout << n << " * ";
		}
		else {
			cout << n;
		}
		f_product *= n;
	}
	cout << " = " << f_product << endl;
}

void arithmetic() {
	int a_start; //starting value
	int a_inc; //incremental
	int a_range; //# of elements in the series
	int a_temp; //temporary variable; used to print out equation + calculate sum
	int a_sum; //sum of all elements in the series

	//assigning input variables
	cout << "Give me a number to start with: ";
	cin >> a_start;
	cout << "Give me a number to add each time: ";
	cin >> a_inc;
	//finding and assigning valid range variable
	cout << "Give me the number of elements in the series: ";
	cin >> a_range;
	while (a_range <= 0) {
		cout << "Nice try. I need a positive nonzero number: ";
		cin >> a_range;
	}

	//Declaring additional variables
	a_sum = 0;
	a_temp = a_start;
	//Main loop; prints equation format and calculates sum of all elements
	for (int n(1); n <= a_range; n++) {
		if (n < a_range) {
			cout << a_temp << " + ";
		}
		else {
			cout << a_temp;
		}
		a_sum += a_temp;
		a_temp += a_inc;
	}
	cout << " = " << a_sum << endl;
}

void geometric() {
	int g_start;
	int g_const;
	int g_range;
	int g_temp;
	int g_sum;

	//assigning input variables
	cout << "Give me a number to start with: ";
	cin >> g_start;
	cout << "Give me a number to multiply by each time: ";
	cin >> g_const;
	//finding + assigning valid range value
	cout << "Give me the number of elements in the series: ";
	cin >> g_range;
	while (g_range <= 0) {
		cout << "Nice try. I need a positive nonzero number: ";
		cin >> g_range;
	}

	g_sum = 0;
	g_temp = g_start;
	for (int n(1); n <= g_range; n++) {
		if (n < g_range) {
			cout << g_temp << " + ";
		}
		else {
			cout << g_temp;
		}

		g_sum += g_temp;
		g_temp *= g_const;
	}
	cout << " = " << g_sum << endl;
}

int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}
