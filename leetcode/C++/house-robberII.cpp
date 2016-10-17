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
#define MAX 100001
#define ll long long int
#define eps 1e-7
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
      int n = nums.size();
      vector<int>dp(n);
      int maxx = 0;
      if(n==0) return 0;
      dp[0] = nums[0];
      dp[1] = max(dp[0],nums[1]);
      for(int i=2;i<n-1;i++){
        dp[i] = max(dp[i-1],dp[i-2]+nums[i]);
      }
      maxx = max(maxx,dp[n-2]);
      dp[1] = nums[1];
      dp[2] = max(dp[1],nums[2]);
      for(int i=3;i<n;i++){
          dp[i] = max(dp[i-1],dp[i-2]+nums[i]);
      }
      maxx = max(maxx,dp[n-1]);
      return maxx;
    }
};




int n,x;
vector<int>a;
int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x;
    a.push_back(x);
  }
  Solution sol;
  cout<<sol.rob(a)<<endl;
  return 0;
}
