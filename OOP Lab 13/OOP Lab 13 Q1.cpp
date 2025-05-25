#include <iostream>
#include <fstream>
using namespace std;

int main() {
    cout << "Character I/O Operations in C++\n";

    string input_str;
    cout << "Enter a string: ";
    getline(cin, input_str);

    int length = input_str.length();
    cout << "Length of the string: " << length << endl;

    string filename = "OOP Lab 13 Q1.txt";

    fstream file;
    file.open(filename, ios::out);
    if (!file) {
        cout << "Failed to open file for writing.\n";
        return 1;
    }

    file << input_str;
    file.close();

    cout << "String stored in file \"" << filename << "\" successfully.\n";

    file.open(filename, ios::in);
    if (!file) {
        cout << "Failed to open file for reading.\n";
        return 1;
    }

    string file_content;
    getline(file, file_content);
    file.close();

    cout << "String read from file: " << file_content << endl;

    return 0;
}
