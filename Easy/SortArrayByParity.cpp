#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0, j = 0, n = nums.size();
        while (j < n) {
            if (nums[j] % 2 == 0) {
                swap(nums[i], nums[j]);
                i++;
            }
            j++;
        }
        return nums;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 1, 2, 4};
    vector<int> sorted = solution.sortArrayByParity(nums);

    cout << "Sorted array by parity: ";
    for (int num : sorted) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
