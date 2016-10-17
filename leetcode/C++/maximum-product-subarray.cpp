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
    long long int max(long long int a, long long int b ) {
      if(a > b) return a;
      return b;
    }
    int maxProduct(vector<int>& nums) {
      int n = nums.size();
      long long int p = 1;
      long long int maxx = 1;
      for(int i=0;i<n;i++){
        p*=nums[i];
        if(p > maxx){
          maxx = max(maxx, p);
        }
        else if(p<0){
          p = 1;
        }
      }
      return maxx;
    }
};

int main(){
  int n;
  cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  Solution sol;
  cout<<sol.maxProduct(a)<<endl;
  return 0;
}
