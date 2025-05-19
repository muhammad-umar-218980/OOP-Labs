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
    Student(const std::string& name, int age, double grade) {
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
    string name;
    int age;
    double grade;

    while (true) {
        try {
            // Input from the user
            cout << "Enter student's name: ";
            getline(cin, name);

            std::cout << "Enter student's age: ";
            cin >> age;

            std::cout << "Enter student's grade: ";
            cin >> grade;            

            // Attempt to create a valid Student object
            Student student(name, age, grade);

            // If successful, display the student details
            student.display();

            // Exit the loop after successful creation
            break;
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

        cout << "\nPlease enter valid details." << endl;
    }

    return 0;
}
