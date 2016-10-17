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
      void printRootLeaf(TreeNode *root , int path ) {
        if(root==NULL) return ;
        path+=root->val;
        if(root->left==NULL && root->right==NULL) {
            list.push_back(path);
        }
        else {
          printRootLeaf(root->left,path);
          printRootLeaf(root->right,path);
        }
      }
      bool hasPathSum (TreeNode* root,int sum) {
          int path;
          printRootLeaf(root,path);
          vector<int>temp;
          temp = list;
          for(int i=0;i<temp.size();i++){
            if(temp[i]==sum) return true;
          }
          return false;
      }
  };

int main(){
  TreeNode *root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->left->right = new TreeNode(5);
  root->left->left = new TreeNode(4);
  root->right = new TreeNode(3);
  Solution sol;
  string str;
  cout<<sol.hasPathSum(root,8)<<endl;
  return 0;
}
