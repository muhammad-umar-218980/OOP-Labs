#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

/* 

    Muhammad Umar
    CSIT Section - A
    Roll no. : CT - 24028
 
*/

void Sort(vector<int> &v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false) {
            break;
        }
    }
}

void printVector(vector<int> &v) {
    int n = v.size();
    for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }
    cout << '\n';
}

int main() {
    int N;
    cout << "Enter number of elements: ";
    cin >> N;

    vector<int> v1(N), v2;
    cout << "\nEnter " << N << " integers:\n\n";
    for (int i = 0; i < N; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> v1[i];
    }

    v2 = v1;

    clock_t start1 = clock();
    Sort(v1);
    clock_t end1 = clock();
    double time1 = double(end1 - start1) / CLOCKS_PER_SEC;

    clock_t start2 = clock();
    sort(v2.begin(), v2.end());
    clock_t end2 = clock();
    double time2 = double(end2 - start2) / CLOCKS_PER_SEC;

    cout << "\nSorted by custom Sort():\n";
    printVector(v1);
    cout << "Time taken: " << time1 << " seconds\n";

    cout << "\nSorted by std::sort():\n";
    printVector(v2);
    cout << "Time taken: " << time2 << " seconds\n";

    return 0;
}
