#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n + 1, -1);  // Create a new list of size n+1 with all values -1

        // Mark present numbers
        for (int i = 0; i < nums.size(); i++) {
            v[nums[i]] = nums[i];
        }

        // Find which number is still -1 (missing)
        for (int i = 0; i < v.size(); i++) {
            if (v[i] == -1) return i;
        }

        return 0; // This should never happen if input is valid
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 0, 1};  // Example input

    int missing = solution.missingNumber(nums);

    cout << "The missing number is: " << missing << endl;

    return 0;
}
