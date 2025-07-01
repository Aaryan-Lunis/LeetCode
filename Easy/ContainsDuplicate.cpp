#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // Sort the array first
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1])  // Check if current element is same as previous
                return true;             // Found duplicate
        }
        return false; // No duplicates
    }
};

int main() {
    Solution sol;

    // Test input
    vector<int> nums = {1, 2, 3, 4, 1};

    // Call function and print result
    if (sol.containsDuplicate(nums)) {
        cout << "Contains duplicates" << endl;
    } else {
        cout << "No duplicates" << endl;
    }

    return 0;
}
