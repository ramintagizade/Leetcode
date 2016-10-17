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
    /*bool check(vector<int >nums, int idx , int sum ){
      if(sum<0) return false;
      if(sum==0) return true;
      for(int i=idx;i<nums.size();++i)
        if(check(nums,idx+1,sum-nums[i])) return true;
        return false;

    }
    bool canPartition(vector<int>& nums) {
      int sum = 0;
      for(int i=0;i<nums.size();i++){
        sum+=nums[i];
      }
      if(sum%2==1) return false;
      return check(nums,0,sum/2);
    } */
    bool canPartition(vector<int >&nums){
      int sum = 0;
      for(int i=0;i<nums.size();i++){
        sum+=nums[i];
      }
      if(sum%2==1) return false;
      int res = sum/2;
      int dp[res+1];
      dp[0] = 1;
      for(int i=1;i<=res;i++){
        for(int j=0;j<nums.size();j++){
          if(nums[j]<=i && !dp[i]) {
            dp[i] = dp[i-nums[j]];
          }
        }
      }
      return dp[res];
    }
};
vector<int>nums;
int x,n;
int main(){
  Solution sol;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x;
    nums.push_back(x);
  }
  cout<<sol.canPartition(nums)<<endl;
  return 0;
}
//1,5,11,5 , 55 ,6 70 ,23]

// 1 6 11 17 28 51
