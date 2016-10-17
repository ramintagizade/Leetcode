#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<set>
#include<stdio.h>
#include<stdlib.h>
#include<queue>
#include<stack>
#define MAX 100001
#define ll long long int
#define eps 1e-7
using namespace std;


class Solution {
public:
    int max(int a , int b ){
      if(a > b ) return a ;
      return b;
    }
    int lengthOfLIS(vector<int>& nums) {
      int n = nums.size();
      vector<int>dp(n);
      if(n==0) return 0;
      int maxx = 0;
      stack<int>Q;
      dp[0] = 1;
      Q.push(0);
      for(int i=1;i<n;i++){
        if(!Q.empty()){
          int id = Q.top();
          if(nums[id]>nums[i])
          while(nums[id]>nums[i]){
            Q.pop();
            if(Q.empty()) break;
            id = Q.top();
          }
          Q.push(i);
        }
        cout<<Q.size()<<endl;
        dp[i] = max(dp[i-1], Q.size());
      }

      return dp[n-1];
    }
};

vector<int>a;
int x,n;
int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x;
    a.push_back(x);
  }
  Solution sol;
  cout<<sol.lengthOfLIS(a)<<endl;
  return 0;
}
