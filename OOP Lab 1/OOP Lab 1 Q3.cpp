#include <iostream>
using namespace std;

/*

Muhammad Umar
CSIT Section - A
Roll no. : CT - 24028

*/


int main() {
    float fahrenheit, celsius;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) / 1.8;

    cout << "Temperature in Celsius: " << celsius << endl;

    return 0;
}
