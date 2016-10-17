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
    int coinChange(vector<int>& coins, int amount){
      int n = coins.size();
      int dp[amount+1];
      dp[0] = 0;
      for(int i=1;i<=amount;i++){
        dp[i] = 10005;
      }
      for(int i=1;i<=amount;i++){
        for(int j=0;j<n;j++){
          if(coins[j]<=i){
            cout<<i<<" "<<coins[j]<<" -> "<<i-coins[j]<<" ";
            dp[i] = min(dp[i],dp[i-coins[j]]+1);
          }
        }
        cout<<endl;
      }
      if(dp[amount]==10005 || dp[amount] > amount)  return -1;
      return dp[amount];
    }
};

vector<int>coins;
int main(){
  int amount , n,x;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x;
    coins.push_back(x);
  }
  cin>>amount;
  Solution sol;
  cout<<sol.coinChange(coins,amount)<<endl;
  return 0;
}

/*
[1 2 5 ]  11

*/
