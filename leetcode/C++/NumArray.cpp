#include<iostream>
#include<vector>
using namespace std;

class NumArray {
    public:
    vector<int>a;
    int sum;
    NumArray(vector<int> &nums) {
        a.resize(nums.size());
        sum = 0;
        for(int i=0;i<nums.size();i++){
          sum+=nums[i];
          a[i] = sum;
        }
    }

    int sumRange(int i, int j) {
      if(i==0) return a[j];
      return a[j] - a[i-1];
    }
};

int main(){
  vector<int>nums;
  int n = 5;
  nums.resize(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  NumArray num(nums);
  cout<<num.sumRange(0,3)<<endl;
  cout<<num.sumRange(1,3)<<endl;
  return 0;
}
