#include <iostream>
using namespace std;
int main() {
	char op;
	float a,b;
	cout << "Enter the operator(+,-,*,/)" << endl;
	cin >> op;
	cout << "Enter the values of a and b" << endl;
	cin >> a >> b;
	switch(op) {
		case '+' :
			cout << "sum= " << a+b << endl;
			break;
		case '-' :
			cout << "diff= " << a-b << endl;
			break;
		case '*' :
			cout << "mul= " << a*b << endl;
			break;
		case '/' :
			cout << "div= " << a/b << endl; 
			break;
		default :
			cout << "Invalid operator" << endl;
	}
	return 0;
}
