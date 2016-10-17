#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int>dp(target+1);
        dp[0] = 1;
        for(int i=1;i<=target;i++){
            for(int j=0;j<nums.size();j++){
                if(i>=nums[j]){
                    dp[i]+=dp[i-nums[j]];
                }
            }
        }
        return dp[target];
    }
};
vector<int>vec;
int main(){
  int n = 3;
  vec.resize(3);
  for(int i=0;i<n;i++){
    cin>>vec[i];
  }
  int target;
  cin>>target;
  Solution sol;
  cout<<sol.combinationSum4(vec,target)<<endl;
  return 0;
}
