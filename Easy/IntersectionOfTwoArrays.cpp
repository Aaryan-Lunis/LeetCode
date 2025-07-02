#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> resultSet;

        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    resultSet.insert(nums1[i]);
                    break;
                }
            }
        }

        return vector<int>(resultSet.begin(), resultSet.end());
    }
};

int main() {
    Solution sol;

    
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    vector<int> result = sol.intersection(nums1, nums2);

    cout << "Intersection: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
