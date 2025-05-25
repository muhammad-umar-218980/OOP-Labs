#include <iostream>
#include <fstream>
using namespace std;

void countLines(const string& filename) {
    fstream file;
    file.open(filename, ios::in);
    if (!file) {
        cout << "Failed to open file: " << filename << endl;
        return;
    }

    int count = 0;
    string line;
    while (getline(file, line)) {
        if (line.empty() || line[0] != 'A') {
            count = count + 1;
        }
    }

    file.close();

    cout << "Lines not starting with 'A': " << count << endl;
}

int main() {
    countLines("STORY.TXT");
    return 0;
}
