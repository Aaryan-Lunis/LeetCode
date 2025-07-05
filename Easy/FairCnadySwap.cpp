#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int alicetotal = 0, bobtotal = 0;

       
        for (int i = 0; i < aliceSizes.size(); i++) {
            alicetotal += aliceSizes[i];
        }

       
        for (int i = 0; i < bobSizes.size(); i++) {
            bobtotal += bobSizes[i];
        }

        
        for (int i = 0; i < aliceSizes.size(); i++) {
            for (int j = 0; j < bobSizes.size(); j++) {
                if ((alicetotal - aliceSizes[i] + bobSizes[j]) ==
                    (bobtotal - bobSizes[j] + aliceSizes[i])) {
                    return vector<int>{ aliceSizes[i], bobSizes[j] };
                }
            }
        }

        return vector<int>{};
    }
};

int main() {
    Solution solution;

   
    vector<int> alice = {1, 2, 5};
    vector<int> bob = {2, 4};

    vector<int> result = solution.fairCandySwap(alice, bob);

    if (!result.empty()) {
        cout << "Alice should swap " << result[0] << " with Bob's " << result[1] << endl;
    } else {
        cout << "No valid swap found." << endl;
    }

    return 0;
}
