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
    int min(int a, int b ){
      if(a > b )return b;
      return a;
    }
    int nthUglyNumber(int n) {
      int dp[100001];
      dp[1] = 1;
      int id1 = 0;
      int id2 = 0;
      int id3 = 0;
      for(int i=2;i<=n;i++){
        int prev = dp[i-1];
        while(dp[id1]*2<=prev){
          id1++;
        }
        while(dp[id2]*3<=prev){
          id2++;
        }
        while(dp[id3]*5<=prev){
          id3++;
        }
        dp[i] = min(dp[id1]*2,min(dp[id2]*3,dp[id3]*5));
      }
      return dp[n];
    }
};
int main(){
  int n;
  cin>>n;
  Solution sol;
  cout<<sol.nthUglyNumber(n)<<endl;
  return 0;
}
/*
1, 2, 3, 4, 5, 6, 8, 9, 10, 12

1 1*2 1*3 2*2 1*5 3*2 4*2 3*3 5*2 6*2

L1 2 , 2*2 ,2*3 , 2*5 , 2*2*2 , 2*2*3,2*2*5,2*2*2*2 ,2*2*2*3,2*2*2*5,2*2*2*2*2,2*2*2*2*3,2*2*2*2*5,
      2*2*2*2*2*2,2*2*2*2*2*3,2*2*2*2*2*5,2*2*2*2*2*2*2,2*2*2*2*2*2*3,2*2*2*2*2*2*5 ,

L2 3 , 3*3 ,3*5 , 3*3*3 , 3*3*5 ,3*3*3*3,3*3*3*5
L3 5 , 5*5 , 5*5*5
*/
