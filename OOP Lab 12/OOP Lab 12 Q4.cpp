#include <iostream>
#include <map>
#include <string>
using namespace std;

bool isValidGrade(char g) {
	if(g == 'A' || g == 'B' || g == 'C' || g == 'D' || g == 'F'){
		return true;
	}
	return false;
}

void displayAll(const map<string, char>& grades) {
    if (grades.empty()) {
        cout << "\nNo student records found.\n";
    } else {
        cout << "\nStudent Records:\n";
        for (const auto& entry : grades) {
            cout << "Name: " << entry.first << " | Grade: " << entry.second << "\n";
        }
    }
}

void retrieveGrade(const map<string, char>& grades, const string& name) {
	
    auto it = grades.find(name);
    if (it != grades.end()) {
        cout << "Grade for " << name << ": " << it->second << "\n";
    } else {
        cout << "Student '" << name << "' not found.\n";
    }
}

void updateGrade(map<string, char>& grades, const string& name) {
    auto it = grades.find(name);
    if (it != grades.end()) {
        char newGrade;
        cout << "Enter new grade (A-D or F) for " << name << ": ";
        cin >> newGrade;
        while (!isValidGrade(newGrade)) {
            cout << "Invalid grade. Please enter A, B, C, D, or F: ";
            cin >> newGrade;
        }
        grades[name] = newGrade;
        cout << "Grade updated for " << name << ".\n";
    } else {
        cout << "Student '" << name << "' not found.\n";
    }
}

void deleteStudent(map<string, char>& grades, const string& name) {
    if (grades.erase(name)) {
        cout << "Student '" << name << "' deleted.\n";
    } else {
        cout << "Student '" << name << "' not found.\n";
    }
}

int main() {
    map<string, char> studentGrades;
    int choice = 0;
    string name;
    char grade;

    while (choice != 6) {
        cout << "\nStudent Grades Menu:\n"
             << "1. Add student\n"
             << "2. Retrieve grade\n"
             << "3. Update grade\n"
             << "4. Delete student\n"
             << "5. Display all students\n"
             << "6. Exit\n"
             << "Enter your choice (1-6): ";
        cin >> choice;
        cin.ignore(1000, '\n');  

        if (choice == 1) {
            cout << "Enter student name: ";
            getline(cin, name);
            cout << "Enter grade (A-D or F) for " << name << ": ";
            cin >> grade;
            while (!isValidGrade(grade)) {
                cout << "Invalid grade. Please enter A, B, C, D, or F: ";
                cin >> grade;
            }
            cin.ignore(1000, '\n');
            studentGrades[name] = grade;
            cout << "Added " << name << " with grade " << grade << ".\n";
        }
        else if (choice == 2) {
            cout << "Enter student name: ";
            getline(cin, name);
            retrieveGrade(studentGrades, name);
        }
        else if (choice == 3) {
            cout << "Enter student name: ";
            getline(cin, name);
            updateGrade(studentGrades, name);
        }
        else if (choice == 4) {
            cout << "Enter student name: ";
            getline(cin, name);
            deleteStudent(studentGrades, name);
        }
        else if (choice == 5) {
            displayAll(studentGrades);
        }
        else if (choice == 6) {
            cout << "Exiting program.\n";
        }
        else {
            cout << "Invalid choice. Please enter 1-6.\n";
        }
    }
    return 0;
}
