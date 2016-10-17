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
    int maxProfit(vector<int>& prices) {
      int n = prices.size();
      vector<int>dp(n);
      dp[0] = prices[0];
      int maxx = 0;
      for(int i=1;i<n;i++){
        dp[i] = min(dp[i-1],prices[i]);
        if(maxx < prices[i]-dp[i])
          maxx  = prices[i] - dp[i];
      }
      if(maxx<=0) return 0;
      return maxx;
    }
};
int n,x;
vector<int>dp;
int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x;
    dp.push_back(x);
  }
  Solution sol;
  cout<<sol.maxProfit(dp)<<endl;
  return 0;
}
