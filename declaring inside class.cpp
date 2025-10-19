#include <iostream>
#include <cstring>
using namespace std;
class student 
{
	int section;
	char*sname;
    public:
		void read(int,char*);
		void print();
	void student::read(int a,char*s) {
		section = a;
		sname = s;
	}
	void student::print() {
		cout <<"section="<< section << endl;
		cout << "name="<< s.name << endl;
	}
};
int main() {
	student s;
	s.read(2,"Sruthi");
	s.print();
	return 0;
}
