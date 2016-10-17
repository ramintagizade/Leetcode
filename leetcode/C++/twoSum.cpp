#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<ctime>
using namespace std;

class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {
      int n = nums.size();
      int ans[200000] = {0};
      //map<int,int>ans;
      vector<int>indices(2);
      for(int i=0;i<n;i++){
        ans[target-nums[i]+70000] = i;
      }
      for(int i=0;i<n;i++){
        if(ans[nums[i]+70000]){
          indices[1] = ans[nums[i]+70000];
          indices[0] = i;
          break;
        }
      }
      return indices;
    }
};

int main(){
  double begin = clock();
  int n=8;
  vector<int>nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  int target;
  cin>>target;
  Solution sol;
  cout<<sol.twoSum(nums,target)[0]<<" "<<sol.twoSum(nums,target)[1]<<endl;
  cout<<(clock() - begin)/CLOCKS_PER_SEC<<endl;
  return 0;
}
