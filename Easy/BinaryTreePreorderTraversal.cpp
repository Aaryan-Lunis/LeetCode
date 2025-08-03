#include <iostream>
#include <vector>
using namespace std;



class Solution {
public:
    void traverse(TreeNode* root, vector<int>& v) {
        if (!root) return;                
        v.push_back(root->val);           
        traverse(root->left, v);         
        traverse(root->right, v);         
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        traverse(root, v);
        return v;
    }
};

int main() {
    
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

   
    Solution sol;
    vector<int> result = sol.preorderTraversal(root);

    
    cout << "Preorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    delete root->right->left;
    delete root->right;
    delete root;

    return 0;
}
