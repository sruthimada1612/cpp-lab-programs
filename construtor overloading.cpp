#include<iostream> 
using namespace std; 
class Rectangle{ 
private: 
  int length; 
  int width; 
public: 
Rectangle(){ 
  length=0; 
  width=0; 
cout<<"Default constructor called."<<endl; 
} 
Rectangle(int l) 
{ 
  length=l; 
  width=l; 
  cout<<"Constructor with one parameter called."<<endl; 
}
Rectangle(int l,int w)
{ 
  length=l; 
  width=w; 
  cout<<"Constructor with two parameters called."<<endl; 
}
void displayArea()
{ 
   cout<<"Area="<<(length*width)<<endl; 
} 
}; 
int main(){ 
Rectangle r1; 
Rectangle r2(5); 
Rectangle r3(4,6); 
r1.displayArea(); 
r2.displayArea(); 
r3.displayArea(); 
return 0; 
}
