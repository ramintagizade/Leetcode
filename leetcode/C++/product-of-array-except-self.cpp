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
    vector<int> productExceptSelf(vector<int>& nums) {
      int n = nums.size();
      vector<int>left(n+2);
      vector<int>right(n+2);
      vector<int>res;
      int x = 1;
      for(int i=1;i<=n;i++){
        x*=nums[i-1];
        left[i] = x;
      }
      x = 1;
      for(int i=n;i>=1;i--){
        x*=nums[i-1];
        right[i] = x;
      }
      right[n+1] = 1;
      left[0] = 1;
      for(int i=1;i<=n;i++){
        int xx  = left[i-1]*right[i+1];
        res.push_back(xx);
      }
      return res;
    }
};

int n,x;
vector<int>a;
int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x;
    a.push_back(x);
  }
  Solution sol;
  vector<int>temp(n);
  temp = sol.productExceptSelf(a);
  for(int i=0;i<temp.size();i++){
    cout<<temp[i]<<" ";
  }
  cout<<endl;
  return 0;
}
