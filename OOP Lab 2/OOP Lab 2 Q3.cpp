#include <iostream>
#include <cstring>
using namespace std;

/*

	Muhammad Umar
	CSIT Section - A
	Roll no. : CT - 24028

*/

class Employee {
private:
    string first_name;  
    string last_name;
    int monthly_salary;

public:
    void set_employee_details(string f_name, string l_name, int salary);
    string get_first_name();
    string get_last_name();
    int get_monthly_salary();
    
    int get_yearly_salary();
    void give_raise();
};

void Employee::set_employee_details(string f_name, string l_name, int salary) {
    first_name = f_name;
    last_name = l_name;

    if (salary > 0) {
        monthly_salary = salary;
    } else {
        monthly_salary = 0;
    }
}

string Employee::get_first_name() {
    return first_name;
}

string Employee::get_last_name() {
    return last_name;
}

int Employee::get_monthly_salary() {
    return monthly_salary;
}

int Employee::get_yearly_salary() {
    return monthly_salary * 12;
}

void Employee::give_raise() {
    monthly_salary = monthly_salary + (monthly_salary * 0.10);
}

int main() {
    Employee A, B;
    string first_name;
    string last_name;
    int salary;

    cout << "Enter details for Employee A:\n";
    cout << "First Name: ";
    cin >> first_name;
    cout << "Last Name: ";
    cin >> last_name;
    cout << "Monthly Salary: ";
    cin >> salary;

    A.set_employee_details(first_name, last_name, salary);

    cout << "\nEnter details for Employee B:\n";
    cout << "First Name: ";
    cin >> first_name;
    cout << "Last Name: ";
    cin >> last_name;
    cout << "Monthly Salary: ";
    cin >> salary;

    B.set_employee_details(first_name, last_name, salary);
    
    cout <<"\n\n--------------------------------------------------- EMPLOYEE DETAILS --------------------------------------------------- \n\n";

    cout << "\nEmployee: " << A.get_first_name() << " " << A.get_last_name() << endl << "Yearly Salary: " << A.get_yearly_salary() << endl;
    cout << "Employee: " << B.get_first_name() << " " << B.get_last_name() << endl << "Yearly Salary: " << B.get_yearly_salary() << endl;

    A.give_raise();
    B.give_raise();

    cout << "\nAfter 10% raise:" << endl << endl;
    cout << "Employee: " << A.get_first_name() << " " << A.get_last_name() << endl << "Yearly Salary: " << A.get_yearly_salary() << endl;
    cout << "Employee: " << B.get_first_name() << " " << B.get_last_name() << endl << "Yearly Salary: " << B.get_yearly_salary() << endl;

    return 0;
}
