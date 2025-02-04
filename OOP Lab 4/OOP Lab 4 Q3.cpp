#include <iostream>
using namespace std;

/*

    Muhammad Umar
    CSIT Section - A
    Roll no. : CT - 24028

*/

class Account {
private:
    int account_no;
    double account_bal;
    int security_code;
    static int count;

public:
    Account();

    void set_Account_No(int value);
    int get_Account_No();

    void set_Account_Bal(double value);
    double get_Account_Bal();

    void set_Security_Code(int value);
    int get_Security_Code();

    static int get_Count();

    void print_Account_Details();
};

Account::Account() {
    count = count + 1;
}

void Account::set_Account_No(int value) {
    account_no = value;
}

int Account::get_Account_No() {
    return account_no;
}

void Account::set_Account_Bal(double value) {
    account_bal = value;
}

double Account::get_Account_Bal() {
    return account_bal;
}

void Account::set_Security_Code(int value) {
    security_code = value;
}

int Account::get_Security_Code() {
    return security_code;
}

int Account::get_Count() {
    return count;
}

void Account::print_Account_Details() {
    cout << "\tAccount Number: " << account_no << endl;
    cout << "\tAccount Balance: " << account_bal << endl;
    cout << "\tSecurity Code: " << security_code << endl;
    cout << endl;
    for (int i = 0; i < 120; i++) {
        cout << "-";
    }
    cout << endl;
}

int Account::count = 0;

int main() {
    Account A1, A2, A3, A4, A5;

    A1.set_Account_No(101);
    A1.set_Account_Bal(5000.50);
    A1.set_Security_Code(1234);

    A2.set_Account_No(102);
    A2.set_Account_Bal(10000.75);
    A2.set_Security_Code(5678);

    A3.set_Account_No(103);
    A3.set_Account_Bal(7500.25);
    A3.set_Security_Code(9101);

    A4.set_Account_No(104);
    A4.set_Account_Bal(12000.00);
    A4.set_Security_Code(3456);

    A5.set_Account_No(105);
    A5.set_Account_Bal(2000.30);
    A5.set_Security_Code(7890);

    cout << "\tACCOUNT DETAILS:" << endl << endl;
    A1.print_Account_Details();
    A2.print_Account_Details();
    A3.print_Account_Details();
    A4.print_Account_Details();
    A5.print_Account_Details();

    cout << "\tTotal Accounts Created: " << Account::get_Count() << endl;

    return 0;
}
