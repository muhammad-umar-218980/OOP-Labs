//Basic Complex Numbers Class with Constructors, data members, accessors, mutators defined.
//Addition Function with 2 arguments added
//Addition Funcion with 1 argument added
//Addition operator overloaded

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
		void add(Complex,Complex);
		Complex add(Complex);
		Complex operator + (Complex);		
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

void Complex::add(Complex a, Complex b){
	real = a.real + b.real;
	imaginary = a.imaginary + b.imaginary;
}

Complex Complex::add(Complex a){
	Complex temp;
	temp.real = real + a.real;
	temp.imaginary = imaginary + a.imaginary;
	return temp;
}

Complex Complex::operator + (Complex a){
	Complex temp;
	temp.real = real + a.real;
	temp.imaginary = imaginary + a.imaginary;
	return temp;
}

int main(){
	Complex c1(3,5), c2(2,6);
	Complex c3;
	
	c3 = c1 + c2;
	cout << "First Complex Number: " << c1.getReal() << "+" << c1.getImaginary() << "i" << endl;
	cout << "Second Complex Number: " << c2.getReal() << "+" << c2.getImaginary() << "i" << endl << endl;
	cout << "Sum of two Complex Number: " << c3.getReal() << "+" << c3.getImaginary() << "i" << endl;

}