#include <iostream>
using namespace std;

/* 

    Muhammad Umar
    CSIT Section - A
    Roll no. : CT - 24028
 
*/

template <typename T1, typename T2>
double add(T1 a, T2 b) {
    cout << "a = " << a << ", b = " << b << " => ";
    return a + b;
}

template <typename T1, typename T2>
double subtract(T1 a, T2 b) {
    cout << "a = " << a << ", b = " << b << " => ";
    return a - b;
}

template <typename T1, typename T2>
double multiply(T1 a, T2 b) {
    cout << "a = " << a << ", b = " << b << " => ";
    return a * b;
}

template <typename T1, typename T2>
double divide(T1 a, T2 b) {
    cout << "a = " << a << ", b = " << b << " => ";
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero" << endl;
        return 0.0;
    }
}

int main() {
    cout << "--- int, int ---" << endl << endl;
    cout << "Add: " << add(10, 5) << endl;
    cout << "Subtract: " << subtract(10, 5) << endl;
    cout << "Multiply: " << multiply(10, 5) << endl;
    cout << "Divide: " << divide(10, 5) << endl;

    cout << "\n--- int, float ---" << endl << endl;
    cout << "Add: " << add(10, 5.5f) << endl;
    cout << "Subtract: " << subtract(10, 5.5f) << endl;
    cout << "Multiply: " << multiply(10, 5.5f) << endl;
    cout << "Divide: " << divide(10, 5.5f) << endl;

    cout << "\n--- float, double ---" << endl << endl;
    cout << "Add: " << add(3.2f, 4.7) << endl;
    cout << "Subtract: " << subtract(3.2f, 4.7) << endl;
    cout << "Multiply: " << multiply(3.2f, 4.7) << endl;
    cout << "Divide: " << divide(3.2f, 4.7) << endl;

    cout << "\n--- double, int ---" << endl << endl;
    cout << "Add: " << add(8.1, 3) << endl;
    cout << "Subtract: " << subtract(8.1, 3) << endl;
    cout << "Multiply: " << multiply(8.1, 3) << endl;
    cout << "Divide: " << divide(8.1, 3) << endl;

    cout << "\n--- float, float ---" << endl << endl;
    cout << "Add: " << add(2.5f, 1.5f) << endl;
    cout << "Subtract: " << subtract(2.5f, 1.5f) << endl;
    cout << "Multiply: " << multiply(2.5f, 1.5f) << endl;
    cout << "Divide: " << divide(2.5f, 1.5f) << endl;

    return 0;
}
