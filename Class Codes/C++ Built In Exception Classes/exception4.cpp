#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

class Student {
private:
	string name;
    int age;
    double grade;

public:
    // Constructor to initialize student details
    Student(const string& name, int age, double grade) {
        if (name.empty()) {
            throw invalid_argument("Student name cannot be empty");
        }
        if (age <= 0 || age > 150) {
            throw out_of_range("Age must be a positive number between 1 and 150");
        }
        if (grade < 0.0 || grade > 100.0) {
            throw out_of_range("Grade must be between 0 and 100");
        }
        
        this->name = name;
        this->age = age;
        this->grade = grade;
    }

    // Function to display student details
    void display() const {
        cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << endl;
    }
};

int main() {
    try {
        // Creating a student with invalid grade (out of range)
        Student student1("John", 20, 105.0);  // This will throw an out_of_range exception
        student1.display();
    }
    catch (const out_of_range& e) {
        cout << "Out of range error: " << e.what() << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Invalid argument error: " << e.what() << endl;
    }
    catch (const exception& e) {
        cout << "General exception: " << e.what() << endl;
    }

    try {
        // Creating a student with invalid age (out of range)
        Student student2("Alice", 200, 85.0);  // This will throw an out_of_range exception
        student2.display();
    }
    catch (const out_of_range& e) {
        cout << "Out of range error: " << e.what() << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Invalid argument error: " << e.what() << endl;
    }
    catch (const exception& e) {
        cout << "General exception: " << e.what() << endl;
    }

    try {
        // Creating a student with an empty name (invalid argument)
        Student student3("", 22, 90.0);  // This will throw an invalid_argument exception
        student3.display();
    }
    catch (const out_of_range& e) {
        cout << "Out of range error: " << e.what() << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Invalid argument error: " << e.what() << endl;
    }
    catch (const exception& e) {
        cout << "General exception: " << e.what() << endl;
    }

    return 0;
}
