#include<iostream> 
using namespace std; 
class Student{ 
private: 
string name; 
int roll; 
public: 
Student(string n,int r){ 
name=n; 
roll=r;cout<<"Constructor called for"<<name<<endl; 
} 
void display(){ 
cout<<"Name:"<<name<<",Roll:"<<roll<<endl; 
} 
~Student(){ 
cout<<"Destructor called for"<<name<<endl; 
} 
}; 
int main(){ 
Student s1("Alice",101); 
Student s2("Bob",102); 
s1.display(); 
s2.display(); 
return 0; 
}
