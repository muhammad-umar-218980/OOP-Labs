#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Employee {
private:
    char* firstName;  
    string lastName;
    int monthlySalary;

public:
    void setEmployeeDetails(char* fName, string lName, int salary);
    char* getFirstName();
    string getLastName();
    int getMonthlySalary();
    int getYearlySalary();
    void giveRaise();
};

void Employee::setEmployeeDetails(char* fName, string lName, int salary) {
    int fName_length = strlen(fName);
    firstName = new char[fName_length + 1]; 
    strcpy(firstName, fName);
    
    lastName = lName;

    if (salary > 0) {
        monthlySalary = salary;
    } else {
        monthlySalary = 0;
    }
}

char* Employee::getFirstName() {
    return firstName;
}

string Employee::getLastName() {
    return lastName;
}

int Employee::getMonthlySalary() {
    return monthlySalary;
}

int Employee::getYearlySalary() {
    return monthlySalary * 12;
}

void Employee::giveRaise() {
    monthlySalary = monthlySalary + (monthlySalary * 0.10);
}

int main() {
    Employee A, B;

    A.setEmployeeDetails("John", "Doe", 3000);
    B.setEmployeeDetails("Muhammad", "Umar", 3000);

    cout << "Employee: " << A.getFirstName() << " " << A.getLastName() << ", Yearly Salary: " << A.getYearlySalary() << endl;
    cout << "Employee: " << B.getFirstName() << " " << B.getLastName() << ", Yearly Salary: " << B.getYearlySalary() << endl;

    A.giveRaise();
    B.giveRaise();

    cout << "\nAfter 10% raise:" << endl << endl;
    cout << "Employee: " << A.getFirstName() << " " << A.getLastName() << ", Yearly Salary: " << A.getYearlySalary() << endl;
    cout << "Employee: " << B.getFirstName() << " " << B.getLastName() << ", Yearly Salary: " << B.getYearlySalary() << endl;

    return 0;
}
