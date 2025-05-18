#include <iostream>
#include <vector>
using namespace std;

/* 

    Muhammad Umar
    CSIT Section - A
    Roll no. : CT - 24028
 
*/

class DynamicStack {
    vector<char> v;
    string s;
public:
    DynamicStack(string input) {
        s = input;
    }
    
    void push(char value) {
        v.push_back(value);
    }
    
    char pop() {
        char c = v.back();
        v.pop_back();
        return c;
    }
    
    char peek() {
        return v.back();
    }
    
    bool empty() {
        return v.empty();
    }
    
    string reverse() {
        string res;
        for (int i = 0; i <= s.size(); ++i) {
            if (i == s.size() || s[i] == ' ') {
                while (!empty()) {
                    res = res + pop();
                }
                if (i < s.size()) {
                    res = res + ' ';
                }
            } else {
                push(s[i]);
            }
        }
        return res;
    }
};

int main() {
    string sentence;
    cout << "Enter any sentence: ";
    getline(cin, sentence);
    
    DynamicStack Obj(sentence);
    
    cout << Obj.reverse() << '\n';
    return 0;
}
