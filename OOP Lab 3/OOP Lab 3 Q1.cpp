#include <iostream>
using namespace std;

/*

	Muhammad Umar
	CSIT Section - A
	Roll no. : CT - 24028

*/


class Complex {
private:
    float real;
    float imag;

public:
    Complex();
    Complex(float r, float i);
    Complex(const Complex &obj);
    float get_Real();
    float get_Imag();
};

Complex::Complex() {
    real = 1.0;
    imag = 1.0;
}

Complex::Complex(float r, float i) {
    real = r;
    imag = i;
}

Complex::Complex(const Complex &obj) {
    real = obj.real;
    imag = obj.imag;
}

float Complex::get_Real() {
    return real;
}

float Complex::get_Imag() {
    return imag;
}

int main() {
    Complex c1(3, 4);
    Complex c2(c1);
    Complex c3;

    cout << "Original Object: " << c1.get_Real() << " + " << c1.get_Imag() << "i" << endl;
    cout << "Copied Object: " << c2.get_Real() << " + " << c2.get_Imag() << "i" << endl;
    cout << "Default Object: " << c3.get_Real() << " + " << c3.get_Imag() << "i" << endl;

    return 0;
}
