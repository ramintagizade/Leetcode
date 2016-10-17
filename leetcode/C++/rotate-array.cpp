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
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>temp(n);
        for(int i=0;i<n;i++){
          temp[(i+k)%n] = nums[i];
        }
        nums = temp;
    }
    void rotate2(vector<int> & nums, int k ){
      int n = nums.size();
      for(int i=0;i<k;i++){
        rotateByOne(nums);
      }
    }
    void rotateByOne(vector<int>&nums){
      int n = nums.size();
      for(int i=0;i<n-1;i++){
        int temp = nums[n-1];
        nums[n-1] = nums[i];
        nums[i] = temp;
      }
    }
};

int main(){
  int n,x,k;
  vector<int>a;
  cin>>n>>k;
  for(int i=0;i<n;i++){
    cin>>x;
    a.push_back(x);
  }
  Solution sol;
  sol.rotate2(a,k);
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  return 0;
}
