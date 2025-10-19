#include <iostream>
using namespace std;
int main() {
	int number,reversed=0;
	cout << "Enter a number:" << endl;
	cin >> number;
	while(number != 0) {
		int digit = number % 10;
		reversed = reversed*10 + digit;
		number /= 10;
	}
	cout << "Reversed number:" << reversed << endl;
	return 0;
}
