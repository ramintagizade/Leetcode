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
    int ok;
    void traverse(TreeNode *a , TreeNode *b){
      if(a!=NULL && b!=NULL){
        traverse(a->left,b->left);
        if(a->val!=b->val) ok = 0;
        traverse(a->right,b->right);
      }
      else if(a!=NULL || b!=NULL) ok = 0;
    }
    bool isSameTree(TreeNode* a, TreeNode* b) {
        ok = 1;
        traverse(a,b);
        return ok;
    }
};

  int main(){
    TreeNode *a = new TreeNode(1);
    a->left = new TreeNode(2);
    a->left->left = new TreeNode(4);
    a->right = new TreeNode(2);

    TreeNode *b = new TreeNode(1);
    b->left = new TreeNode(2);
    b->left->left = new TreeNode(4);
    b->right = new TreeNode(2);
    Solution sol;
    cout<<sol.isSameTree(a,b)<<endl;
    return 0;
  }
