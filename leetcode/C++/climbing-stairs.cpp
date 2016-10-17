#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<set>
#include <sstream>
using namespace std;

class Solution {
public:

    long long int C(int n , int k ) {
      long long int res = 1;
      for(int i=1;i<=k;i++){
        res*=n;
        res/=i;
        n--;
      }
      return res;
    }
    long long int climbStairs(int n) {
        int up  = 0;
        long long int  ans  = 0;
        int twos = 0;
        int  all = 0;
        while(up<n){
          up+=2;
          if(up>n) break;
          twos = up/2;
          all = (n - up) + twos;
          ans+=C(all,twos);
        }
        return ans+1;
    }
    long long int climbStairs2(int n){
      long long int dp[n+1];
      dp[0] = 0;
      dp[1] = 1;
      dp[2] = 2;
      for(int i=3;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
      }
      return dp[n];
    }
};
int main(){
  Solution sol;
  int n;
  cin>>n;
  cout<<sol.climbStairs2(n)<<endl;
  return 0;
}
