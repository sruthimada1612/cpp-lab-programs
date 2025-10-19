#include <iostream>
using namespace std;
class student
{
	int rno;
	char*sname;
	public:
		void read(int ,char*);
		void print();
};
void student::read(int a,char*s)
{
	rno=a;
	sname=s;
}
void student::print()
{
	cout <<"rno="<<rno<<endl;
	cout<<"name="<<sname<<endl;
}
int main()
{
	student s;
	s.read(59,"Sruthi");
	s.print();
	return 0;
}
