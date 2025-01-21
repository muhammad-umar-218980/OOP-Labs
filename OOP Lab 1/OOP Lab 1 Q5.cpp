#include <iostream>
using namespace std;

/*

Muhammad Umar
CSIT Section - A
Roll no. : CT - 24028

*/

float pi = 3.14159;

double surfaceArea(double radius);
double volume(double radius);

int main() {
    double radius;

    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    cout << "Surface Area: " << surfaceArea(radius) << endl;
    cout << "Volume: " << volume(radius) << endl;

    return 0;
}

double surfaceArea(double radius) {
    float area =  4 * pi * radius * radius;
    return area;
}

double volume(double radius) {
    float area =  (4.0 / 3.0) * pi * radius * radius * radius;
    return area ;
}
