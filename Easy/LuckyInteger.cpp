#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        int result = -1;

        for (int i = 0; i < n; i++) {
            int count = 0;

           
            for (int j = 0; j < n; j++) {
                if (arr[j] == arr[i]) {
                    count++;
                }
            }

           
            if (count == arr[i]) {
                result = max(result, arr[i]); 
            }
        }

        return result;
    }
};

int main() {
    Solution sol;

    vector<int> arr = {2, 2, 3, 4};  
    int result = sol.findLucky(arr);

    cout << "The lucky number is: " << result << endl;

    return 0;
}
