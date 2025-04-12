#include <iostream>
using namespace std;

/* 

    Muhammad Umar
    CSIT Section - A
    Roll no. : CT - 24028

*/

class Store {
protected:
    float total_bill;
    float discount;

public:
    Store(float total_bill) {
        this->total_bill = total_bill;
    }

    virtual float CalcBill() = 0;
};

class Imtiaz : public Store {
public:
    Imtiaz(float total_bill) : Store(total_bill) {
        this->discount = 0.07;
    }

    float CalcBill() {
        float value = total_bill - (total_bill * discount);
        return value;
    }
};

class BinHashim : public Store {
public:
    BinHashim(float total_bill) : Store(total_bill) {
        this->discount = 0.05;
    }

    float CalcBill() {
        float value = total_bill - (total_bill * discount);
        return value;
    }
};

int main() {
    float bill;
    cout << "Enter the total bill: ";
    cin >> bill;

	cout << endl;
	
    Imtiaz I(bill);
    cout << "Final bill after 7% discount at Imtiaz: " << I.CalcBill() << endl << endl;

    BinHashim BH(bill);
    cout << "Final bill after 5% discount at BinHashim: " << BH.CalcBill() << endl;

    return 0;
}
