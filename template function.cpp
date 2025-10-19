#include<iostream>
using namespace std;
template <typename T>
T findMax(T a, T b) {
	return(a>b)?a:b;
}
int main() {
	cout<<"Max of 10 and 20: "<<findMax(10,20)<<endl;
	cout<<"Max of 5.5 and 2.3: "<<findMax(5.5,2.3)<<endl;
	cout<<"Max of 'A' and 'Z': "<<findMax('A','Z')<<endl;
	return 0;
}
