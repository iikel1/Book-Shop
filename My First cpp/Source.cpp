#include <iostream>

using namespace std;

int main() {
	int number = 0;
	cout << "Welcome to the Book Shop\n1. Math Book\n2. English Book\n3. Chemisty Book";
	cout << "Type the number of the Book" << endl;
	cin >> number;

	switch (number) {
		case 1:
			cout << "You have bought Math Book!";
			break;
		case 2:
			cout << "You have bought English!";
			break;
		case 3:
			cout << "You have bought Chemisty Book!";
			break;
		default:
			cout << "invaild Number";
	}
	

	return 0;
}