#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int possibleStringCount(string word) {
        unordered_set<string> originals;
        originals.insert(word); // case when Alice didn't make a mistake

        for (int i = 1; i < word.size(); i++) {
            if (word[i] == word[i - 1]) {
                string possible = word.substr(0, i) + word.substr(i + 1);
                originals.insert(possible);
            }
        }

        return originals.size();
    }
};
int main() {
    Solution sol;
    string typed = "loove";
    cout << "Possible original string count: " << sol.possibleStringCount(typed) << endl;
    return 0;
}
