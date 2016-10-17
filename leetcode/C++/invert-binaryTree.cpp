#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

//Definition for a binary tree node.
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
      if(root==NULL) return root;
      TreeNode * temp = root->left;
      root->left = root->right;
      root->right = temp;
      root->left = invertTree(root->left);
      root->right = invertTree(root->right);
      return root;
    }

    void onOrder(TreeNode *root){
      if(root==NULL) return;
      else {
        onOrder(root->left);
        cout<<root->val<<endl;
        onOrder(root->right);
      }
    }
};

int main(){
  TreeNode *root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->left->left = new TreeNode(1);
  root->left->right = new TreeNode(3);
  root->right = new TreeNode(7);
  root->right->left = new TreeNode(6);
  root->right->right = new TreeNode(9);
  root->right->right->right = new TreeNode(15);
  root->left->left->left = new TreeNode(16); 
  Solution sol;
  sol.invertTree(root);
  sol.onOrder(root);
  return 0;
}
