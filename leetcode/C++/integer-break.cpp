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
    int integerBreak(int n) {
      int dp[n+1];
      dp[2] = 1;
      dp[3] = 2;
      dp[4] = 4;
      dp[5] = 6;
      dp[6] = 9;
      for(int i=7;i<=n;i++){
        dp[i] = max(dp[i-3]*3,dp[i-2]*2);
      }
      return dp[n];
    }
};

int main(){
  Solution sol;
  int n;
  cin>>n;
  cout<<sol.integerBreak(n)<<endl;
  return 0;
}
