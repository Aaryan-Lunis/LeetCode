#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        for(int i=0; i<numRows; i++) {
            vector<int> row(i+1, 1); 
            for(int j=1; j<i; j++) {
                row[j] = pascal[i-1][j-1] + pascal[i-1][j]; 
            }
            pascal.push_back(row);
        }
        return pascal;
    }
};

int main() {
    Solution sol;
    int numRows;
    cout << "Enter number of rows for Pascal's Triangle: ";
    cin >> numRows;

    vector<vector<int>> result = sol.generate(numRows);

    cout << "Pascal's Triangle with " << numRows << " rows:" << endl;
    for (int i = 0; i < result.size(); i++) {
        // Print spaces to center the triangle
        for (int space = 0; space < numRows - i - 1; space++) {
            cout << " ";
        }
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
