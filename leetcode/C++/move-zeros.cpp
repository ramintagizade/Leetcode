#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;


class Solution {
public:
    void moveZeroes2(vector<int>& nums) {
      int n = nums.size();
      int j;
      for(int i=0;i<n-1;i++){
        if(nums[i]==0){
          j = i+1;
          while(j-1<n){
            if(nums[j]==0) j++;
            else break;
          }
          swap(nums[i],nums[j]);
        }
      }
      for(int i=0;i<n;i++) cout<<nums[i]<<" ";
   }
   void moveZeroes(vector<int>&nums){
     int n = nums.size();
     int j = 0;
     for(int i=0;i<n;i++){
       if(nums[i]!=0){
         nums[j] = nums[i];
         j++;
       }
     }
     for(int i = j;i<n;i++){
       nums[i] = 0;
     }
   }
};

int main() {
  int n;
  cin>>n;
  vector<int>nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  Solution sol;
  sol.moveZeroes(nums);
  return 0;
}
