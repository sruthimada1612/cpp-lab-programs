#include<iostream>
using namespace std;
class number
{
	private:
		int value;
	public:
		number(int v=0)
		{
			value=v;
		}
		number operator-()
		{
			return number(-value);
		}
		number operator+(const number &obj)
		{
			return number(value+obj.value);
		}
		void display()
		{
			cout<<"Value="<<value<<endl;
		}
};
int main()
{
	number n1(10),n2(20),result;
	cout<<"Original values:"<<endl;
	n1.display();
	n2.display();
	result=n1+n2;
	cout<<"After binary + operator(n1+n2):"<<endl;
	result.display();
	result=-n1;
	cout<<"After unary - operator(-n1):"<<endl;
	result.display();
	return 0;
}
