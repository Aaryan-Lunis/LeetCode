#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for(char ch : s) {
           
            if(ch == '(' || ch == '[' || ch == '{') {
                stk.push(ch);
            }
           
            else {
               
                if(stk.empty()) return false;

               
                if((stk.top() == '(' && ch != ')') ||
                   (stk.top() == '[' && ch != ']') ||
                   (stk.top() == '{' && ch != '}')) {
                    return false;
                }

               
                stk.pop();
            }
        }

       
        return stk.empty();
    }
};

int main() {
    Solution sol;
    string input;

    cout << "Enter a string of brackets: ";
    cin >> input;

    if(sol.isValid(input)) {
        cout << "The bracket string is valid." << endl;
    } else {
        cout << "The bracket string is invalid." << endl;
    }

    return 0;
}
