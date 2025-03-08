#include <iostream>
#include <string>
using namespace std;

int index;
string input;

bool parse_S();
bool parse_L();

bool parse_S() {
    if (index >= input.length()) return false;
    
    if (input[index] == 'a') {
        index++;
        return true;
    } else if (input[index] == '(') {
        index++;
        if (parse_L() && index < input.length() && input[index] == ')') {
            index++;
            return true;
        }
    }
    return false;
}

bool parse_L() {
    if (!parse_S()) return false;
    
    while (index < input.length() && input[index] == ',') {
        index++;
        if (!parse_S()) return false;
    }
    return true;
}

bool is_valid(string str) {
    input = str;
    index = 0;
    return parse_S() && index == input.length();
}

int main() {
    int test;
    cin>>test;
    while(test--){
        string input;
        cin>>input;
        if (is_valid(input)) {
            cout << "Valid string" << endl;
        } else {
            cout << "Invalid string" << endl;
        }
    }
    return 0;
}
