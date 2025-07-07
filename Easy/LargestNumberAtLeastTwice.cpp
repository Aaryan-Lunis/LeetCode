#include <iostream>
#include <vector>
#include <climits> // for INT_MIN
using namespace std;

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int slargest = 0;              
        int largest = INT_MIN;         
        int index = -1;              

        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > largest) {
               
                slargest = largest;   
                largest = nums[i];     
                index = i;           
            }
            else if(nums[i] < largest && nums[i] > slargest) {
                
                slargest = nums[i];
            }
        }

       
        if(2 * slargest <= largest) return index;
        else return -1;
    }
};


int main() {
    Solution sol;
    vector<int> nums = {3, 6, 1, 0};
    int result = sol.dominantIndex(nums);
    cout << "Output: " << result << endl; 
    return 0;
}
