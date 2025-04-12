#include <iostream>
using namespace std;

/* 

    Muhammad Umar
    CSIT Section - A
    Roll no. : CT - 24028

*/

class ArrayMultiplier {
protected:
    virtual void calculate() = 0;
};

class ArrayMultiplier1D : public ArrayMultiplier {
private:
    int arr[4];

public:
    ArrayMultiplier1D() {
    	cout << "Enter values for 1D Array" << endl << endl;
        for (int i = 0; i < 4; i++) {
            cout << "Enter value " << (i + 1) << ": ";
            cin >> arr[i];
        }
    }

    void calculate() {
        int product = 1;
        for (int i = 0; i < 4; i++) {
            product = product * arr[i];
        }
        cout << endl << "Product of 1D array: " << product << endl << endl;
        cout << "--------------------------------" << endl << endl ;
    }
};

class ArrayMultiplier2D : public ArrayMultiplier {
private:
    int arr[2][2];

public:
    ArrayMultiplier2D() {
        cout << "Enter 4 values for the 2x2 2D array: " << endl << endl;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << "Enter value for array[" << i << "][" << j << "]: ";
                cin >> arr[i][j];
            }
        }
    }

    void calculate() {
        int product = 1;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                product = product * arr[i][j];
            }
        }
        cout << endl << "Product of 2x2 2D array: " << product << endl;
    }  
};

int main() {
    ArrayMultiplier1D a1;
    a1.calculate();

    ArrayMultiplier2D a2;
    a2.calculate();

    return 0;
}
