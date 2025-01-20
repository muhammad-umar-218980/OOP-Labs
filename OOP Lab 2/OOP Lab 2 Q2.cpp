#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
    int transactionCount;

public:
    BankAccount() {
        balance = 0.0;
        transactionCount = 0;
    }

    void deposit(double amount);
    void withdraw(double amount);
    void displayBalance();
    void displayTransactionCount();
    void displayInterest();
};

void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance = balance + amount;
        transactionCount = transactionCount + 1;
        cout << "\tDeposited: " << amount << "$"<< endl;
    } else {
        cout << "\tInvalid deposit amount!" << endl;
    }
}

void BankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance = balance - amount;
        transactionCount = transactionCount + 1;
        cout << "\tWithdrawn: " << amount  << "$"<< endl;
    } else {
        cout << "\tInvalid withdrawal amount or insufficient balance!" << endl;
    }
}

void BankAccount::displayBalance() {
    cout << "\tCurrent Balance: " << balance << "$"<< endl;
}

void BankAccount::displayTransactionCount() {
    cout << "\tNumber of Transactions: " << transactionCount << endl;
}

void BankAccount::displayInterest() {
    double interestRate = 0.05;
    double interest = balance * interestRate;
    cout << "\tInterest Earned: " << interest  << "$"<< endl;
}

void displayMenu() {
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
    BankAccount account;
    int choice;
    double amount;

    while (true) {
        displayMenu();
        cin >> choice;
        
        if(choice == 6){
        	break;
		}

        switch (choice) {
            case 1:
                account.displayBalance();
                break;
            case 2:
                account.displayTransactionCount();
                break;
            case 3:
                account.displayInterest();
                break;
            case 4:
                cout << "\tEnter deposit amount: ";
                cin >> amount;
                account.deposit(amount);
                break;
            case 5:
                cout << "\tEnter withdrawal amount: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 6:
                cout << "\tExiting the program...\n";
                break;
            default:
                cout << "\tInvalid choice! Please try again.\n";
                break;
        }
    }

    return 0;
}
