#include <iostream>
using namespace std;

/* 

    Muhammad Umar
    CSIT Section - A
    Roll no. : CT - 24028

*/

class Calculator {
    public:
        int add(int value1, int value2);
        int add(int value1, int value2, int value3);
        
        int multiply(int value1, int value2);
        int multiply(int value1, int value2, int value3);
        
        int subtract(int value1, int value2);
        
        float divide(int value1, int value2);
};

int Calculator::add(int value1, int value2) {
    int sum = value1 + value2;
    return sum;
}
int Calculator::add(int value1, int value2, int value3) {
    int sum = value1 + value2 + value3;
    return sum;
}



int Calculator::multiply(int value1, int value2) {
    int product = value1 * value2;
    return product;
}
int Calculator::multiply(int value1, int value2, int value3) {
    int product = value1 * value2 * value3;
    return product;
}



int Calculator::subtract(int value1, int value2) {
    int difference = value1 - value2;
    return difference;
}



float Calculator::divide(int value1, int value2) {
    if (value2 == 0) {
        return 0;
    }
    
    value1 = (float)value1;
    
    float quotient = value1 / value2;
    return quotient;
}



//------------------------------- MAIN FUNCTION -------------------------------

int main() {
    int choice;
    Calculator c1;

    cout << "\nDo you want to enter 2 or 3 numbers? : ";
    cin >> choice;
    cout << endl;

    if (choice == 2) {
        int Num1, Num2;
        cout << "Enter first number : ";
        cin >> Num1;
        cout << "Enter second number : ";
        cin >> Num2;

        cout << endl;
        cout << "Addition : " << c1.add(Num1, Num2) << endl;
        cout << endl;
        cout << "Multiplication : " << c1.multiply(Num1, Num2) << endl;
        cout << endl;
        cout << "Subtraction : " << c1.subtract(Num1, Num2) << endl;
        cout << endl;
        
        float divResult = c1.divide(Num1, Num2);
        if (divResult == 0) {
            cout << "Division : Division by zero is not possible" << endl;
        } else {
            cout << "Division : " << divResult << endl;
        }
    } 
    else if (choice == 3) {
        int Num1, Num2, Num3;
        cout << "Enter first number : ";
        cin >> Num1;
        cout << "Enter second number : ";
        cin >> Num2;
        cout << "Enter third number : ";
        cin >> Num3;

        cout << endl;
        cout << "Addition : " << c1.add(Num1, Num2, Num3) << endl;
        cout << endl;
        cout << "Multiplication : " << c1.multiply(Num1, Num2, Num3) << endl;
        cout << endl;
        cout << "Subtraction for " << Num1 << " and " << Num2 << " : " << c1.subtract(Num1, Num2) << endl;
        cout << endl;

        float divResult = c1.divide(Num1, Num2);
        if (divResult == 0) {
            cout << "Division : Division by zero is not possible" << endl;
        } else {
            cout << "Division for " << Num1 << " and " << Num2 << " : " << divResult << endl;
        }
    } 
    else {
        cout << "Enter 2 or 3 only !!" << endl;
    }
}
