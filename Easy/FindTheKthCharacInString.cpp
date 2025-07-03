#include <iostream>
#include <string>

class Solution {
public:
    char kthCharacter(int k) {
        std::string sb = "a";
        while (sb.length() < k) {
            int size = sb.length();
            for (int i = 0; i < size; ++i) {
                char nextChar = 'a' + ((sb[i] - 'a' + 1) % 26);
                sb += nextChar;
            }
        }
        return sb[k - 1];
    }
};

int main() {
    Solution sol;

    int k;
    std::cout << "Enter the value of k: ";
    std::cin >> k;

    char result = sol.kthCharacter(k);
    std::cout << "The " << k << "-th character is: " << result << std::endl;

    return 0;
}
