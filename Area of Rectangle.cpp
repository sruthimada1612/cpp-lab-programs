#include <iostream>
using namespace std;
class Rectangle {
	private:
		int length;
		int width;
	public:
		Rectangle(int l,int w) {
			length=l;
			width=w;
		}
		friend int calculatearea(Rectangle r);
};
int calculatearea(Rectangle r) {
	return r.length*r.width;
}
int main() {
	Rectangle rect(10,5);
	int area=calculatearea(rect);
	cout<< "Area of Rectangle=" << area << endl;
	return 0;
}
