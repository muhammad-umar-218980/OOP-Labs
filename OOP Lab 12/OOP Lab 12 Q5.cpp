#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    set<string> guest_names;
    string name;
    int i = 1;

    cout << "Party Guest Tracker\n";
    cout << "-------------------\n";
    cout << "Enter guest names one by one.\n";
    cout << "Type 'q' and press Enter when you are done.\n\n";

    while (true) {
        cout << "\nEnter name of guest " << i << ": ";
        getline(cin, name);

        if (name == "q" || name == "Q") {
            break;
        }
        if (name.empty()) {
            cout << "\n  Error : Name cannot be empty. Please try again.\n\n";
            continue;
        }

        auto result = guest_names.insert(name);
        if (result.second) {
            i++;
        } else {
            cout << "  Notice : '" << name << "' was already in the list and cannot be added again.\n";
        }
    }

    cout << "\nTotal Number of unique guests attending the party are : " << guest_names.size() << " \n";
    cout << "-------------------------------------\n";
    for (const auto &guest : guest_names) {
        cout << " - " << guest << "\n";
    }

    return 0;
}
