#include <iostream>
using namespace std;

void swapNumbers(int* a, int* b, int* c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main() {
    int num1, num2, num3;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    swapNumbers(&num1, &num2, &num3);

    cout << "\n\nAfter swapping:" << endl;
    cout << "First Number: " << num1 << endl;
    cout << "Second Number: " << num2 << endl;
    cout << "Third Number: " << num3 << endl;

    return 0;
}
