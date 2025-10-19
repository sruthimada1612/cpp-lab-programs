#include<iostream>
using namespace std;
template <typename T>
class Pair {
	private:
		T first,second;
		public:
			Pair(T a,T b) {
				first = a;
				second = b;
			}
			T getMax() {
				return (first > second) ? first : second;
			}
			void display() {
				cout <<"First: "<<first<<",Second:"<<second<<endl;
			}
};
int main() {
	Pair<int> p1(10,20);
	p1.display();
	cout<<"Max: "<<p1.getMax()<<endl;
	Pair<double>p2(15.5,12.3);
	p2.display();
	cout<<"Max: "<<p2.getMax()<<endl;
	Pair<char>p3('A','Z');
	p3.display();
	cout<<"Max: "<<p3.getMax()<<endl;
	return 0;
		}
