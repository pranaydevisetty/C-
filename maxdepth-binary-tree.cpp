#include<iostream>
using namespace std;
// Definition for a binary tree node.
  struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class Solution {
public:
    int maxDepth(TreeNode* root) 
    {
        if(root==NULL)
            return 0;
        return max(maxDepth(root->left)+1,maxDepth(root->right)+1);
    }
};

int main()
{
	TreeNode *node = new TreeNode(1);
	node->left = new TreeNode(2);
	node->right = new TreeNode(3);
	node->left->left = new TreeNode(4);
	node->left->right = new TreeNode(5);
	
	Solution sol;
	cout<<sol.maxDepth(node);
	return 0;
}
