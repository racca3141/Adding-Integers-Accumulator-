// Emerson Racca
// 09/20/21
// Lab 5c - Adding Integers (Accumulator)

/*
The sum of n integers app.

1. Ask the user how many integers to add.  (Use a for loop when coding this.)
2. Add the integers starting at 1...

1+2+3+4+5 = 15

3. Display the result to the user.
4. Ask if they would like to run again.
5. Modify this app... ask the user what integer to start from.  For example, if the user wants to start from 5, start adding from there.

5+6+7+8 = 26

No functions needed here, do all the work in the main.
*/

#include<iostream>
using namespace std;

int main() {

	int numInt;
	int startInt = 1;
	int accInt;
	char again;

	cout << "The Sum of n Integers\n";
	cout << "This app computes the sum of n integers at a given starting point.\n\n";

	do {
		accInt = 0;

		cout << "\nHow many integers do you want to add? ";
		cin >> numInt;

		cout << "What integer do you want to start from? ";
		cin >> startInt;

		cout << endl;

		numInt = numInt + startInt - 1;

		for (int i = startInt; i <= numInt; i++) {
			accInt = accInt + i;
			cout << i;
			if (i < numInt)
				cout << " + ";
			else
				cout << " = ";
		}

		cout << accInt << endl;

		cout << "\nWould you like to run it again? (y or n)? ";
		cin >> again;

	} while (again == 'y');

	return 0;
}
