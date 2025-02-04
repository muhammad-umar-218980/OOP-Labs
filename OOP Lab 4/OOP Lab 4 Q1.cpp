#include <iostream>
#include <string>
using namespace std;

/*

    Muhammad Umar
    CSIT Section - A
    Roll no. : CT - 24028

*/

class Employee {
private:
    string EmployeeName;
    const int EmployeeId;

public:
    Employee(string name, int id);

    void set_EmployeeName(string name);
    string get_EmployeeName();
    int get_EmployeeId();
};

Employee::Employee(string name, int id) : EmployeeId(id) {
    EmployeeName = name;
}

void Employee::set_EmployeeName(string name) {
    EmployeeName = name;
}

string Employee::get_EmployeeName() {
    return EmployeeName;
}

int Employee::get_EmployeeId() {
    return EmployeeId;
}

int main() {
    Employee Employee1("Umar", 28);
    Employee Employee2("Ahmed", 41);
    Employee Employee3("Ayaan", 48);

    cout << endl << "\tINITIAL NAMES" << endl << endl;
    cout << "\tEmployee 1: " << Employee1.get_EmployeeName() << endl << "\tID: " << Employee1.get_EmployeeId() << endl << endl;
    cout << "\tEmployee 2: " << Employee2.get_EmployeeName() << endl << "\tID: " << Employee2.get_EmployeeId() << endl << endl;
    cout << "\tEmployee 3: " << Employee3.get_EmployeeName() << endl << "\tID: " << Employee3.get_EmployeeId() << endl << endl;

    Employee1.set_EmployeeName("Ibtissam");
    Employee2.set_EmployeeName("Rafay");
    Employee3.set_EmployeeName("Ahmed");

    cout << endl;
    for (int i = 0; i < 60; i++) {
        cout << "-";
    }
    cout << endl;
    
    cout << "\tAFTER CHANGING NAMES" << endl << endl;
    cout << "\tEmployee 1: " << Employee1.get_EmployeeName() << endl << "\tID: " << Employee1.get_EmployeeId() << endl << endl;
    cout << "\tEmployee 2: " << Employee2.get_EmployeeName() << endl << "\tID: " << Employee2.get_EmployeeId() << endl << endl;
    cout << "\tEmployee 3: " << Employee3.get_EmployeeName() << endl << "\tID: " << Employee3.get_EmployeeId() << endl << endl;

    return 0;
}
