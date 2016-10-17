#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<set>
#include <sstream>
#include<queue>
using namespace std;

class Solution {
public:
    long long int min(long long int a, long long int b ){
      if(a > b) return b;
      return a;
    }
    long long int  nthSuperUglyNumber(int n, vector<int>& primes) {
      vector<long long int>dp(n);
      dp[0] = 1;
      int sz = primes.size();
      vector<int>cnt(sz,0);
      for(int i=1;i<n;i++){
        long long int prev = dp[i-1];
        dp[i] = 100000000000000;
        for(int j=0;j<sz;j++){
          while(dp[cnt[j]]*primes[j]<=prev){
            cnt[j]++;
          }
          dp[i] = min(dp[cnt[j]]*primes[j],dp[i]);
        }
      }
      return dp[n-1];
    }
};

int n,m,k,x;
vector<int >primes;
int main(){
  Solution sol;
  cin>>n;
  cin>>m;
  for(int i=0;i<m;i++){
    cin>>x;
    primes.push_back(x);
  }
  cout<<sol.nthSuperUglyNumber(n,primes)<<endl;
  return 0;
}
