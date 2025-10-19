#include <iostream>
using namespace std;
inline int add(int a,int b) {
	return a+b;
}
inline double add(double a,double b) {
	return a+b;
}
inline int add(int a,int b,int c) {
	return a+b+c;
}
int main() {
	cout << "add(5,10)=" << add(5,10) << endl;
	cout << "add(3.6,4.8)=" << add(3.6,4.8) << endl;
	cout << "add(3,8,6)=" << add(3,8,6) << endl;
	return 0;
}

