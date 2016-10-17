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

struct node {
  int key;
  int has;
  node *left;
  node *right;
  node(int x) : key(x), has(1),left(NULL),right(NULL) {}
};

class Solution {
public:
    int insert(node *root , int val ){
      int count = 0;
      while(1){
        if(root->key >= val) {
          root->has++;
          if(root->left==NULL){
            root->left = new node(val); break;
          }
          else {
            root = root->left;
          }
        }
        else {
          count+=root->has;
          if(root->right==NULL){
            root->right = new node(val); break;
          }
          else {
            root = root->right;
          }
        }
      }
      return count;
    }
    vector<int> countSmaller(vector<int>& nums) {
      int n = nums.size();
      vector<int >temp(n);
      if(n==0) {
        return temp;
      }
      node *tree = new node(nums[n-1]);
      int idx = 0;
      temp[idx] = 0;
      idx++;
      for(int i=n-2;i>=0;i--){
        int cnt = insert(tree,nums[i]);
        temp[idx] = cnt;
        idx++;
      }
      reverse(temp.begin(),temp.end());
      for(int i=0;i<n;i++)
        cout<<temp[i]<<" ";
      return temp;
    }
};

vector<int>a;
int x,n;
int main (){
  Solution sol;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x;
    a.push_back(x);
  }
  sol.countSmaller(a);
  return 0;
}
/*
Given nums = [5, 2, 6, 1]
To the right of 5 there are 2 smaller elements (2 and 1).
To the right of 2 there is only 1 smaller element (1).
To the right of 6 there is 1 smaller element (1).
To the right of 1 there is 0 smaller element.

4 2 2 3 1 5

        5
      1
        3
      2   4
    2
   */
