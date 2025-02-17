//Basic Complex Numbers Class with data members, accessors, mutators defined

#include <iostream>
using namespace std;

class Complex{
	private:
		int real;
		int imaginary;
	public:
		void setReal(int);
		void setImaginary(int);
		int getReal() const;
		int getImaginary() const;		
};

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
	Complex c1, c2;
	c1.setReal(3);
	c1.setImaginary(5);
	c2.setReal(2);
	c2.setImaginary(6);
	cout << "First Complex Number: " << c1.getReal() << "+" << c1.getImaginary() << "i" << endl;
	cout << "First Complex Number: " << c2.getReal() << "+" << c2.getImaginary() << "i" << endl;
}