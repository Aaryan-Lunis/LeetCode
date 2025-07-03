#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        int n = nums1.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    nums3.push_back(nums1[i]);
                    nums2.erase(nums2.begin() + j);
                    break;
                }
            }
        }
        return nums3;
    }
};

int main() {
    Solution sol;

    // Sample input
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    vector<int> result = sol.intersect(nums1, nums2);

    // Print result
    cout << "Intersection: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
