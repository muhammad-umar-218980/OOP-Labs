#include <iostream>
using namespace std;

template <typename T1, typename T2>
void swap(T1& a, T2& b) {
        T1 temp = a;
        a = b;
        b = temp;
}

int main() {
    int x = 5, y = 10;
    float m = 3.5f, n = 7.8f;
    double p = 1.2, q = 9.3;

    cout << "--- int, int ---" << endl;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    cout << "\n--- float, float ---" << endl;
    cout << "Before swap: m = " << m << ", n = " << n << endl;
    swap(m, n);
    cout << "After swap: m = " << m << ", n = " << n << endl;

    cout << "\n--- double, double ---" << endl;
    cout << "Before swap: p = " << p << ", q = " << q << endl;
    swap(p, q);
    cout << "After swap: p = " << p << ", q = " << q << endl;

    cout << "\n--- int, float ---" << endl;
    cout << "Before swap: x = " << x << ", m = " << m << endl;
    swap(x, m);
    cout << "After swap: x = " << x << ", m = " << m << endl;

    cout << "\n--- float, double ---" << endl;
    cout << "Before swap: m = " << m << ", p = " << p << endl;
    swap(m, p);
    cout << "After swap: m = " << m << ", p = " << p << endl;

    return 0;
}
