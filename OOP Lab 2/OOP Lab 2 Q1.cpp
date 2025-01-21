#include <iostream>
using namespace std;

/*

	Muhammad Umar
	CSIT Section - A
	Roll no. : CT - 24028

*/

class Student {
private:
    string name;
    int roll_no;
    int sem;
    string sec;

public:
    void set_Name(string value);
    void set_RollNo(int value);
    void set_Sem(int value);
    void set_Sec(string value);

    string get_Name();
    int get_RollNo();
    int get_Sem();
    string get_Sec();
};

void Student::set_Name(string value) {
    name = value;
}

void Student::set_RollNo(int value) {
    roll_no = value;
}

void Student::set_Sem(int value) {
    sem = value;
}

void Student::set_Sec(string value) {
    sec = value;
}

string Student::get_Name() {
    return name;
}

int Student::get_RollNo() {
    return roll_no;
}

int Student::get_Sem() {
    return sem;
}

string Student::get_Sec() {
    return sec;
}

int main() {
    Student students[4];

    for (int i = 0; i < 4; i++) {
        string name;
        int roll_no, sem;
        string sec;

        cout << "Enter data for Student " << i + 1 << ":" << endl;
        cout << "Name: ";
        getline(cin, name);
        students[i].set_Name(name);

        cout << "Roll Number: ";
        cin >> roll_no;
        students[i].set_RollNo(roll_no);

        cout << "Semester: ";
        cin >> sem;
        students[i].set_Sem(sem);

        cin.ignore(); 
        
        cout << "Section: ";
        getline(cin, sec);
        students[i].set_Sec(sec);
        
        cout << endl << endl ; 

    }

    cout << "\nStudents of Section A are : \n";
    for (int i = 0; i < 4; i++) {
    	
        if (students[i].get_Sec() == "A" || students[i].get_Sec() == "a") {
            cout << "\nStudent " << i + 1 << " Details:" << endl;
            cout << "Name: " << students[i].get_Name() << endl;
            cout << "Roll Number: " << students[i].get_RollNo() << endl;
            cout << "Semester: " << students[i].get_Sem() << endl;
        }
    }

    return 0;
}
