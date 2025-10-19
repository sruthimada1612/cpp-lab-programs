#include<iostream> 
using namespace std; 
inline int add(int a, int b){ 
return a+b; 
} 
inline double add(double a, double b){ 
return a+b; 
} 
inline int add(int a, int b, int c){ 
return a+b+c; 
} 
inline float add(float a, float b){ 
return a+b; 
} 
inline float add(float a, float b, float c){ 
return a+b+c; 
} 
int main(){ 
cout<<"add(5, 10) = "<<add(5, 10)<<endl; 
cout<<"add(2.5, 3.7) = "<<add(2.5, 3.7)<<endl; 
cout<<"add(77, 88, 4) = "<<add(77, 88, 4)<<endl; 
cout<<"add(12.96, 86.05) = "<<add(12.96, 86.05)<<endl; 
cout<<"add(3.36f, 0.47f, 4.10f) = "<<add(3.36f, 0.47f, 4.10f)<<endl; 
} 
