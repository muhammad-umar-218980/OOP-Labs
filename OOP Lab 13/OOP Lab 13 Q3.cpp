#include <iostream>
#include <fstream>
using namespace std;

class Person {
public:
    char name[50];
    int age;

    Person() {
        name[0] = '\0';
        age = 0;
    }

    Person(const char value1[], int value2) {
        int i = 0;
        while (value1[i] != '\0' && i < 49) {
            name[i] = value1[i];
            i = i + 1;
        }
        name[i] = '\0';
        age = value2;
    }
};

int main() {
    Person person1("Umar", 18);

    fstream file("person.bin", ios::out | ios::binary);
    if (!file) {
        cout << "Error opening file for writing.\n";
        return 1;
    }

    file.write(reinterpret_cast<char*>(&person1), sizeof(person1));
    file.close();

    Person person2;

    file.open("person.bin", ios::in | ios::binary);
    if (!file) {
        cout << "Error opening file for reading.\n";
        return 1;
    }

    file.read(reinterpret_cast<char*>(&person2), sizeof(person2));
    file.close();

    cout << "Read from file -> Name: " << person2.name << ", Age: " << person2.age << "\n";

    return 0;
}
        