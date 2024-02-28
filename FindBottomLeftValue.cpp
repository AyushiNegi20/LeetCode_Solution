#include <queue>
using namespace std;

class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int leftmost_value;

        while (!q.empty()) {
            int levelSize = q.size(); // Track the number of nodes at the current level
            for (int i = 0; i < levelSize; ++i) {
                TreeNode* node = q.front();
                q.pop();

                // Update leftmost_value only for the first node at each level
                if (i == 0) {
                    leftmost_value = node->val;
                }

                if (node->left) {
                    q.push(node->left);
                }
                if (node->right) {
                    q.push(node->right);
                }
            }
        }

        return leftmost_value;
    }
};
