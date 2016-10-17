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
    int maxRotateFunction(vector<int>& A) {
      int n = A.size();
      vector<int>f(n);
      vector<int>temp(n);
      int maxx = 0;
      int pre = 0;
      int sum = 0;
      int ans = 0;
      for(int i=0;i<n;i++){
        sum+=A[i];
        pre+= i*A[i];
      }
      for(int i=1;i<n;i++){
        ans = pre + sum - n*A[n-i];
        maxx = max(maxx,ans);
        pre = ans;
      }
      return maxx;
    }
};

int main(int argc, char const *argv[]) {
  Solution sol;
  vector<int>a;
  int n,x;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x;
    a.push_back(x);
  }
  cout<<sol.maxRotateFunction(a)<<endl;
  return 0;
}
