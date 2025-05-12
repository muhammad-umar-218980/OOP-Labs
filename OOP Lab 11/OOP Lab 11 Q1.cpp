#include <iostream>
#include <cctype>
using namespace std;

/* 

    Muhammad Umar
    CSIT Section - A
    Roll no. : CT - 24028
 
*/

void check_password(string password) {
    if (password.length() < 6) {
        throw string("Password must be at least 6 characters long");
    }

    bool hasDigit = false;
    for (int i = 0; i < password.length(); i++) {
        if (isdigit(password[i])) {
            hasDigit = true;
            break;
        }
    }

    if (hasDigit == false) {
        throw string("Password must contain at least one digit");
    }
}

int main() {
    string username, password;

    cout << "Enter username: ";
    getline(cin, username);

    cout << "Enter password: ";
    getline(cin, password);

    try {
        check_password(password);
        cout << endl << "Login successful! Welcome, " << username << "." << endl;
    }
    catch (string error) {
        cout << endl << "Login failed: " << error << endl;
    }

    return 0;
}
