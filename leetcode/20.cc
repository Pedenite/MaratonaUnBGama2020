#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    vector<char> stack;

    for (char c : s) {
        switch (c) {
            case '(': 
            case '{': 
            case '[':
                stack.push_back(c);
                break;
            
            case ')':
                if (!verify(stack, '(')) {
                    return false;
                }

                break;
            
            case '}':
                if (!verify(stack, '{')) {
                    return false;
                }

                break;

            case ']':
                if (!verify(stack, '[')) {
                    return false;
                }

                break;
        }
    }

    return !stack.size();
}

bool verify(vector<char> &stack, char expected) {
    if (!stack.size()) {
        return false;
    }

    if (stack.back() == expected) {
        stack.pop_back();
        return true;
    }

    return false;
}

int main() {
    cout << isValid("()") << "\n";

    return 0;
}
