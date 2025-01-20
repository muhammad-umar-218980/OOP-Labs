#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll_no;
    int semester;
    char section;

public:
    void setName(string value);
    void setRollNo(int value);
    void setSemester(int value);
    void setSection(char value);

    string getName();
    int getRollNo();
    int getSemester();
    char getSection();
};

void Student::setName(string value) {
    name = value;
}

void Student::setRollNo(int value) {
    roll_no = value;
}

void Student::setSemester(int value) {
    semester = value;
}

void Student::setSection(char value) {
    section = value;
}

string Student::getName() {
    return name;
}

int Student::getRollNo() {
    return roll_no;
}

int Student::getSemester() {
    return semester;
}

char Student::getSection() {
    return section;
}

int main() {
    Student students[4];

    for (int i = 0; i < 4; i++) {
        cout << "Enter data for Student " << i + 1 << ":" << endl;

        string name;
        int roll_no, semester;
        char section;

        cout << "Name: ";
        getline(cin, name);
        students[i].setName(name);

        cout << "Roll Number: ";
        cin >> roll_no;
        students[i].setRollNo(roll_no);

        cout << "Semester: ";
        cin >> semester;
        students[i].setSemester(semester);

        cout << "Section: ";
        cin >> section;
        students[i].setSection(section);

        cin.ignore();
    }

    cout << "\nStudents in Section A:\n";
    for (int i = 0; i < 4; i++) {
        if (students[i].getSection() == 'A' || students[i].getSection() == 'a') {
            cout << "\nStudent " << i + 1 << " Details:" << endl;
            cout << "Name: " << students[i].getName() << endl;
            cout << "Roll Number: " << students[i].getRollNo() << endl;
            cout << "Semester: " << students[i].getSemester() << endl;
            cout << "Section: " << students[i].getSection() << endl;
        }
    }

    return 0;
}
