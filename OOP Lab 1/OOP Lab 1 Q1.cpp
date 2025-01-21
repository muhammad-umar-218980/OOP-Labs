#include <iostream>
using namespace std;

/*

Muhammad Umar
CSIT Section - A
Roll no. : CT - 24028

*/


int main() {
    int rollNumber;
    float marks[5], totalMarks = 0, percentage;

    cout << "Enter your roll number: ";
    cin >> rollNumber;

    cout << "Enter the marks : " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        totalMarks = totalMarks + marks[i];
    }

    percentage = (totalMarks / 500) * 100;

    cout << "\nRoll Number: " << rollNumber << endl;
    cout << "Total Marks Obtained: " << totalMarks << " / 500" << endl;
    cout << "Percentage: " << percentage << " %" << endl;

    return 0;
}
