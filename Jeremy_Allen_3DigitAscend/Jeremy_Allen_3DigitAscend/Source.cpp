/*
Jeremy Allen, Zayam Tariq, and Aidan Perry - 10-5-17 Period 2
Assignment Name : Three Digit Ascend Decend Selection
Brief Description of the Assignment
We will ask the person to put in a 3 digit number and we will tell them if the digit is ascending descending or neither
*/

// Libraries

#include <iostream>// gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha

#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces

using namespace std;

// Functions()

void pause() { // Function to pause the system

	cout << "Press any key to continue . . .";

	while (!_kbhit());

	_getch();

	cout << '\n';
}

// MAIN

void main() {


	int Three_digit_number;//Defining Variables so we can use them to store the numbers
	int First_number;
	int Second_number;
	int Third_number;

	for (int i = 0; i++;) {
		cout << "Type in a 3 digit number and I wil tell you if it is ascending, descending" << endl << "or neither." << endl;// asking the user for a 3 digit number
		cin >> Three_digit_number;
		First_number = Three_digit_number / 100;// finding the 1st number in the 3 digit number
		Second_number = (Three_digit_number / 10) % 10;// finding the 2nd number
		Third_number = Three_digit_number % 10;// finding the 3rd number
		if (First_number > Second_number && Second_number > Third_number) { // if function to detemine if the numbers are ascending
			cout << "That's a Descending Number You Little Finna" << endl;
		}
		else if (First_number < Second_number && Second_number < Third_number) { // if function to detemine if the numbers are descending
			cout << "That's an Ascending Number, it Makes me Whip and Nae Nae" << endl;
		}
		else {
			cout << "Neither" << endl; // if function to display neither if the above conditions are not met
		}

		if (i == 30) {
			break;
		}
	}
	pause(); // pauses to see the displayed text

}

