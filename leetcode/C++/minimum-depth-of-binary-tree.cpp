#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<set>
#include<stdio.h>
#include<stdlib.h>
#include<iomanip>
#include <queue>
#define MAX 100001
#define ll long long int
#define eps 1e-7
#define INF  100000007;
using namespace std;

//Definition of TreeNode:
  class TreeNode {
  public:
      int val;
      TreeNode *left, *right;
      TreeNode(int val) {
          this->val = val;
          this->left = this->right = NULL;
      }
  };
  class Solution {
  public:
      vector<int >list;
      int minn;
      void printRootLeaf(TreeNode *root , int path ) {
        if(root==NULL) return ;
        path++;
        if(root->left==NULL && root->right==NULL) {
            if(minn> path)
              minn= path;
        }
        else {
          printRootLeaf(root->left,path);
          printRootLeaf(root->right,path);
        }
      }
      int minDepth (TreeNode* root) {
          int path = 0;
          minn = 9000;
          printRootLeaf(root,path);
          if(minn ==9000) return 0;
          return minn;
      }
  };

int main(){
  TreeNode *root = new TreeNode(0);
  //root->left = new TreeNode(2);
  //root->left->right = new TreeNode(5);
  //root->left->left = new TreeNode(4);
  //root->right = new TreeNode(3);
  Solution sol;
  string str;
  cout<<sol.minDepth(root)<<endl;
  return 0;
}
