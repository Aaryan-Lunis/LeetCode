#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        // If the lengths are different, they can't be anagrams
        if (s.length() != t.length()) {
            return false;
        }

        // Sort both strings
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        // If sorted strings are the same, they are anagrams
        return s == t;
    }
};

int main() {
    Solution solution;
    string s = "listen";
    string t = "silent";

    if (solution.isAnagram(s, t)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}
