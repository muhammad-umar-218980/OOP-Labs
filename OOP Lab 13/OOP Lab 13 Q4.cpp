#include <iostream>
#include <fstream>
using namespace std;

class Participant {
public:
    int id;
    char name[50];
    float score;

    Participant() {
        id = 0;
        name[0] = '\0';
        score = 0;
    }

    void Input() {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore(); 

        cout << "Enter name: ";
        cin.getline(name, 50);

        cout << "Enter score: ";
        cin >> score;
        cin.ignore();

        fstream file("participant.dat", ios::out | ios::app | ios::binary);
        if (!file) {
            cout << "Error opening file for writing.\n";
            return;
        }
        file.write(reinterpret_cast<char*>(this), sizeof(Participant));
        file.close();
        cout << "Participant data saved.\n";
    }

    void Output() {
        int search_id;
        cout << "Enter ID to search: ";
        cin >> search_id;
        cin.ignore();

        ifstream file("participant.dat", ios::in | ios::binary);
        if (!file) {
            cout << "Error opening file for reading.\n";
            return;
        }

        Participant p;
        bool found = false;
        while (file.read(reinterpret_cast<char*>(&p), sizeof(Participant))) {
            if (p.id == search_id) {
                cout << "ID: " << p.id << "\nName: " << p.name << "\nScore: " << p.score << "\n";
                found = true;
                break;
            }
        }
        file.close();

        if (!found) {
            cout << "Participant with ID " << search_id << " not found.\n";
        }
    }

    void Max() {
        ifstream file("participant.dat", ios::in | ios::binary);
        if (!file) {
            cout << "Error opening file for reading.\n";
            return;
        }

        Participant p, max_participant;
        bool first = true;
        while (file.read(reinterpret_cast<char*>(&p), sizeof(Participant))) {
            if (first) {
                max_participant = p;
                first = false;
            } else if (p.score > max_participant.score) {
                max_participant = p;
            }
        }
        file.close();

        if (!first) {
            cout << "Participant with highest score:\n";
            cout << "ID: " << max_participant.id << "\nName: " << max_participant.name << "\nScore: " << max_participant.score << "\n";
        } else {
            cout << "No participants found in the file.\n";
        }
    }
};

int main() {
    Participant p;

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Input participant data\n";
        cout << "2. Search participant by ID\n";
        cout << "3. Display participant with highest score\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            p.Input();
        } else if (choice == 2) {
            p.Output();
        } else if (choice == 3) {
            p.Max();
        } else if (choice != 4) {
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
