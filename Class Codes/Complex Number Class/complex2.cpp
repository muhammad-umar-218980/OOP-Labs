//Basic Complex Numbers Class with Constructors, data members, accessors, mutators defined

#include <iostream>
using namespace std;

class Complex{
	private:
		int real;
		int imaginary;
	public:
		Complex();
		Complex(int,int);
		void setReal(int);
		void setImaginary(int);
		int getReal() const;
		int getImaginary() const;		
};

Complex::Complex() : real(0),imaginary(0) {}

Complex::Complex(int a, int b) : real(a), imaginary(b) { }

void Complex::setReal(int a) {
	real = a;
}

void Complex::setImaginary(int a){
	imaginary = a;
}

int Complex::getReal() const{
	return real;
}

int Complex::getImaginary() const {
	return imaginary;
}

int main(){
	Complex c1(3,5), c2(2,6);
	cout << "First Complex Number: " << c1.getReal() << "+" << c1.getImaginary() << "i" << endl;
	cout << "First Complex Number: " << c2.getReal() << "+" << c2.getImaginary() << "i" << endl;
}