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
		friend number operator-(number n);
		friend number operator+(number n1,number n2);
		void display() const
		{
			cout<<"Value:"<<value<<endl;
		}
};
number operator-(number n)
{
	return number(-n.value);
}
number operator+(number n1,number n2)
{
	return number(n1.value+n2.value);
}
int main()
{
	number a(15),b(10),result;
	cout<<"Original values:"<<endl;
	a.display();
	b.display();
	result=a+b;
	cout<<"After binary +operator(a+b):"<<endl;
	result.display();
	result=-a;
	cout<<"After unary -operator(-a):"<<endl;
	result.display();
	return 0;
}
