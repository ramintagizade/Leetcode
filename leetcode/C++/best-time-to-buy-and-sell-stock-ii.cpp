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
#include<ctype.h>
#include<stack>
#define ll long long int
#define eps 1e-7
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int n = prices.size();
      if(n==0) return 0;
      int lastBuy = 0;
      int ans = 0;
      int maxx = 0;
      lastBuy = prices[0];
      int lastSell =0;
      for(int i=1;i<n;i++){
        if((lastBuy < prices[i]) && (lastSell<=prices[i])){
          maxx = max(maxx,prices[i]-lastBuy);
          lastSell = prices[i];
        }
        else {
          ans+=maxx;
          lastBuy = prices[i];
          lastSell = 0;
          maxx = 0;
        }
      }
      ans+=maxx;
      return ans;
    }
};

int main (){
  vector<int>prices;
  int n,x;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x;
    prices.push_back(x);
  }
  Solution sol;
  cout<<sol.maxProfit(prices)<<endl;
  return 0;
}
/*
1 [0]
1 3 [2]
1 3 4 [3]
1 3 4 5 [4]
1 3 4 5 4 [4]
1 3 4 5 4 6[6]
1 3 4 5 4 6 7[7]
1 3 4 5 4 6 7 5[7]
1 3 4 5 4 6 7 5 6[8]
1 3 4 5 4 6 7 5 6 10[12]
*/
