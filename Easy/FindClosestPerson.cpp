#include <iostream>
using namespace std;

class Solution {
public:
    int findClosest(int x, int y, int z) {
        if (x == z && y == z) return 0;  // both reached z together
        if (x == z) return 1;            // x reached z first
        if (y == z) return 2;            // y reached z first

        
        return findClosest(x + (x < z ? 1 : -1),
                           y + (y < z ? 1 : -1),
                           z);
    }
};

int main() {
    Solution sol;

    // Example 
    int x1 = 3, y1 = 10, z1 = 7;
    cout << "Result (x=" << x1 << ", y=" << y1 << ", z=" << z1 << "): "
         << sol.findClosest(x1, y1, z1) << endl;  // Expected 2

   

    return 0;
}
