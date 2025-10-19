//Scope resolution
#include<iostream>
int var=100;
namespace Firstspace {
	int var=1;
	void display() {
		std::cout<<"Inside Firstspace,var = "<<var<<std::endl;
			}
}
namespace Secondspace {
	int var=2;
	void display() {
		std::cout<<"Inside Secondspace,var="<<var<<std::endl;
	}
}
class sample {
	public:
		void show();
};
void sample::show() {
	std::cout<<"Inside Sample::show() function"<<std::endl;
}
int main() {
	int var=10;
	std::cout <<"Local var="<<var<<std::endl;
 std::cout <<"Global var="<<var<<std::endl;
 Firstspace::display();
 Secondspace::display();
 sample obj;
 obj.show();
 return 0;
}
