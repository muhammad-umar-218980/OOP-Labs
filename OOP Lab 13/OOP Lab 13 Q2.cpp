#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string source_file, dest_file;

    cout << "Enter source file name: ";
    getline(cin, source_file);


    fstream fin(source_file, ios::in);
    if (!fin) {
        cout << "Failed to open source file.\n";
        return 1;
    }

    cout << "Enter destination file name: ";
    getline(cin, dest_file);
    
    fstream fout(dest_file, ios::out);
    if (!fout) {
        cout << "Failed to open destination file.\n";
        fin.close();
        return 1;
    }

    string line;
    while (getline(fin, line)) {
        fout << line << '\n';
    }

    fin.close();
    fout.close();

    cout << "File copied successfully from \"" << source_file << "\" to \"" << dest_file << "\".\n";

    return 0;
}
