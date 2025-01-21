#include <iostream>
using namespace std;

/*

Muhammad Umar
CSIT Section - A
Roll no. : CT - 24028

*/

int main() {
    char accountType;
    int accountNumber;
    double withdrawalAmount, remainingBalance;

    remainingBalance = 200000;
    
    cout << "The Total Amount in your Account is " << remainingBalance << "\n" << endl;

    cout << "Enter account type (S for savings, C for current): ";
    cin >> accountType;

    switch(accountType) {
        case 'S':
        case 's':
            cout << "\n\nEnter savings account number: ";
            cin >> accountNumber;

            cout << "\nEnter withdrawal amount: ";
            cin >> withdrawalAmount;

            if (withdrawalAmount > 100000) {
                cout << "\nCannot withdraw more than 100,000." << endl;
            } else if (withdrawalAmount <= remainingBalance) {
                double tax = 0;

                remainingBalance = remainingBalance - withdrawalAmount;

                if (withdrawalAmount > 50000) {
                    tax = 0.05 * withdrawalAmount;
                } else {
                    tax = 0.02 * withdrawalAmount;
                }

                remainingBalance = remainingBalance - tax;

                cout << "\nWithdrawal amount: " << withdrawalAmount << endl;
                cout << "Tax deducted: " << tax << endl;
                cout << "Remaining balance: " << remainingBalance << endl;
            } else {
                cout << "\n\nInsufficient balance." << endl;
            }
            break;

        case 'C':
        case 'c':
            cout << "\n\nEnter current account number: ";
            cin >> accountNumber;

            cout << "\nEnter withdrawal amount: ";
            cin >> withdrawalAmount;

            if (withdrawalAmount > 100000) {
                cout << "\nCannot withdraw more than 100,000." << endl;
            } else if (withdrawalAmount <= remainingBalance) {
                remainingBalance = remainingBalance - withdrawalAmount;
                remainingBalance = remainingBalance - 100;

                if (withdrawalAmount > 50000) {
                    remainingBalance = remainingBalance - (0.05 * withdrawalAmount);
                }

                cout << "\nWithdrawal amount: " << withdrawalAmount << endl;
                cout << "Fee deducted: 100" << endl;
                cout << "Tax deducted: " << (withdrawalAmount > 50000 ? 0.05 * withdrawalAmount : 0) << endl;
                cout << "Remaining balance: " << remainingBalance << endl;
            } else {
                cout << "\n\nInsufficient balance." << endl;
            }
            break;

        default:
            cout << "Invalid account type." << endl;
            break;
    }

    return 0;
}
