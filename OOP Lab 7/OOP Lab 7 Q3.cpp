#include<iostream>
using namespace std;

class Employee {
private:
    string name;
    int id;
    string designation;
    double salary;

public:
    Employee(string name, int id, string designation, double salary) {
        this->name = name;
        this->id = id;
        this->designation = designation;
        this->salary = salary;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Designation: " << designation << endl;
        cout << "Salary: " << salary << "$" << endl;
    }

    friend class Payroll; 
};

class Payroll {
public:
    void updateSalary(Employee& emp, double newSalary) {
        emp.salary = newSalary; 
    }
};

int main() {
    Employee E1("Muhammad Umar", 24028, "Computer Scientist", 200000.00);

    cout << "Before salary update:" << endl;
    E1.display();

    Payroll P1;
    P1.updateSalary(E1, 220000.00); 

    cout << "\nAfter salary update:" << endl;
    E1.display();

    return 0;
}
