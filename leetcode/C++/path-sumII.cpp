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
      map<int , pair<int , vector<int> > >all;
      int cnt;
      void printRootLeaf(TreeNode *root , int path , vector<int> res) {
        if(root==NULL) return ;
        path+=root->val;
        res.push_back(root->val);
        if(root->left==NULL && root->right==NULL) {
              all[cnt].second = res;
              all[cnt].first = path;
              cnt++;
        }
        else {
          printRootLeaf(root->left,path,res);
          printRootLeaf(root->right,path,res);
        }
      }
      vector<vector<int> > pathSum (TreeNode* root,int sum) {
          int path=0;
          vector<int>res;
          cnt = 0;
          printRootLeaf(root,path,res);
          vector<vector<int> >temp;
          int idx = 0;
          for(int i=0;i<cnt;i++){
            if(all[i].first==sum)
              temp.push_back(all[i].second);
          }
          return temp;
      }
  };

int main(){
  TreeNode *root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->left->right = new TreeNode(5);
  root->left->left = new TreeNode(4);
  root->right = new TreeNode(7);
  Solution sol;
  string str;
  sol.pathSum(root,8);
  return 0;
}
