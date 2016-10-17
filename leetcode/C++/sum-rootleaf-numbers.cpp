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
      int all;
      void printRootLeaf(TreeNode *root ,string path ) {
        if(root==NULL) return;
        path+=to_string(root->val);
        if(root->left==NULL && root->right==NULL) {
            all+=stoi(path);
        }
        else {
          printRootLeaf(root->left,path);
          printRootLeaf(root->right,path);
        }
      }
      int  sumNumbers (TreeNode* root) {
          string path;
          all = 0;
          printRootLeaf(root,path);
          return all;
      }
  };

int main(){
  TreeNode *root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->left->right = new TreeNode(5);
  root->left->left = new TreeNode(4);
  root->right = new TreeNode(7);
  Solution sol;
  cout<<sol.sumNumbers(root)<<endl;
  return 0;
}
