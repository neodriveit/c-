// Przeciazanie operatorów - l. zespolone 
#include <iostream> 
using namespace std; 
class Complex 
{ 
 private: 
 float real; 
 float imag; 
 public: 
 Complex(): real(0), imag(0){ } // Konstruktor 
 Complex(float r, float i) // Konstruktor 
 { 
 real = r; imag = i; 
 } ; 
 // Operator overloading 
 Complex operator+(Complex c2); 
 Complex operator-(Complex c2); 
 Complex operator*(Complex c2); 
 Complex operator/(Complex c2); 
 void output(); 
}; 
void Complex::output() 
{ 
 if(imag < 0) 
 cout << real << " " << imag << "i" << endl; 
 else 
 cout << real << " + " << imag << "i" << endl; 
} 
Complex Complex::operator+(Complex c2) 
{ 
 Complex temp; 
 temp.real = real + c2.real; 
 temp.imag = imag + c2.imag; 
 return temp; 
} 
// Tu uzupelnic 
int main() { 
 Complex c1(2,3), c2(1,2), result; 
 result = c1 + c2; 
 result.output(); 
 result = c1 - c2; 
 result.output(); 
 result = c1 * c2; 
 result.output(); 
 result = c1 / c2; 
 result.output(); 
 return 0;
