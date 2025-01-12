#include <iostream>
#include <climits>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    TreeNode() : val(0), left(NULL), right(NULL) {}
};

class Solution {
private:    
    int minDepthValue = INT_MAX;
    int currentDepth = 0;
    
    
public:
    int minDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        traverse(root); //从根节点开始DFS遍历
        return minDepthValue;
    }

    void traverse(TreeNode* root) {
        if (root == NULL) {
            return;
        }
        // 前序遍历位置
        currentDepth++;
        // 如果当前节点是叶子节点，更新最小深度
        if (root->left == NULL && root->right == NULL) {
            minDepthValue = min(minDepthValue, currentDepth);
        }
        traverse(root->left);// 递归遍历左子树
        traverse(root->right);// 递归遍历右子树
        // 后序遍历位置
        currentDepth--;//回溯
    }
};


int main() {
    // 创建一个二叉树
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    // 创建一个Solution对象
    Solution solution;

    // 计算二叉树的最小深度
    int minDepth = solution.minDepth(root);

    // 输出结果
    cout << "The minimum depth of the binary tree is: " << minDepth << endl;

    // 释放内存
    delete root->right->right;
    delete root->right->left;
    delete root->right;
    delete root->left;
    delete root;

    return 0;
}
