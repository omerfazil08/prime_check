#include <iostream>

using namespace std;


	
int main() {

	int a;
	cout << "Enter the Number You Want to Check if its a Prime Number: ";
	cin >> a;

	for (int i = 2; i < a; i++) {

		if (a %i == 0) {
			cout << a <<" is not a Prime Number";
			return 0;
		}

	}
	cout << a <<" is a Prime Number";
}

	
