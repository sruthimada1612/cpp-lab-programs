#include <iostream>
using namespace std;

int main() {
    int num;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << num << " is a Prime Number." << endl;
    else
        cout << num << " is NOT a Prime Number." << endl;

    return 0;
}
