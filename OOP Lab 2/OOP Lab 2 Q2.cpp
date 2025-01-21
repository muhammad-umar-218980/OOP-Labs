#include <iostream>
using namespace std;

/*

	Muhammad Umar
	CSIT Section - A
	Roll no. : CT - 24028

*/

class Bank_Account {
	
private:
    double balance;
    int transactionCount;

public:
    Bank_Account() {
        balance = 0.0;
        transactionCount = 0;
    }

    void deposit(double amount);
    void withdraw(double amount);
    void display_Balance();
    void display_TransactionCount();
    void display_Interest();
    
};

void Bank_Account::deposit(double amount) {
    if (amount > 0) {
        balance = balance + amount;
        transactionCount = transactionCount + 1;
        cout << "\n\tDeposited: " << amount << "$" << endl;
    } else {
        cout << "\n\tInvalid deposit amount!" << endl;
    }
}

void Bank_Account::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance = balance - amount;
        transactionCount = transactionCount + 1;
        cout << "\n\tWithdrawn: " << amount << "$" << endl;
    } else {
        cout << "\n\tInvalid withdrawal amount or insufficient balance!" << endl;
    }
}

void Bank_Account::display_Balance() {
    cout << "\n\tCurrent Balance: " << balance << "$" << endl;
}

void Bank_Account::display_TransactionCount() {
    cout << "\n\tNumber of Transactions: " << transactionCount << endl;
}

void Bank_Account::display_Interest() {
    double interestRate = 0.05;
    double interest = balance * interestRate;
    cout << "\n\tInterest Earned: " << interest << "$" << endl;
}

void menu() {
    cout << "\n\tMENU: \n";
    cout << "\t1. Display the account balance\n";
    cout << "\t2. Display the number of transactions\n";
    cout << "\t3. Display interest earned for this period\n";
    cout << "\t4. Make a deposit\n";
    cout << "\t5. Make a withdrawal\n";
    cout << "\t6. Exit the program\n";
    cout << "\tEnter your choice: ";
}

int main() {
    Bank_Account account;
    int choice;
    double amount;

    do {
        menu();
        cin >> choice;

        switch (choice) {
            case 1:
                account.display_Balance();
                break;
            case 2:
                account.display_TransactionCount();
                break;
            case 3:
                account.display_Interest();
                break;
            case 4:
                cout << "\n\tEnter deposit amount: ";
                cin >> amount;
                account.deposit(amount);
                break;
            case 5:
                cout << "\n\tEnter withdrawal amount: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 6:
                cout << "\n\tThank you !!\n";
                break;
            default:
                cout << "\n\tInvalid choice! Please try again.\n";
                break;
        }

    } while (choice != 6);

    return 0;
}
