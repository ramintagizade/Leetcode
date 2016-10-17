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
    int maxHeight(TreeNode * root){
      cout<<"entered "<<endl;
      if(root==NULL) return 0;
      return 1 + max(maxHeight(root->left) ,  maxHeight(root->right));
    }
    int maxDepth(TreeNode* root) {
      if(root==NULL) return 0;
      return maxHeight(root) ;
    }
};
int main(){
  Solution sol;
  TreeNode * root = new TreeNode(1);
  //root->left = new TreeNode(2);
  //root->left->left = new TreeNode(3);
  //root->left->left->right = new TreeNode(9);
  //root->right = new TreeNode(5);
  cout<<sol.maxDepth(root)<<endl;
  return 0;
}
