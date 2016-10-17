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
#include<stack>
#define MAX 100001
#define ll long long int
#define eps 1e-7
using namespace std;

class Solution {
public:
    int maxRotateFunction(vector<int>& A) {
      int n = A.size();
      int maxx = 0;
      int f[n+1];
      int k = 1;
      for(int i=0;i<n;i++){
        int temp = A[(i+k)%(n-1)];
        A[(i+k)%(n-1)] = A[i];
        A[i] = temp;
        cout<<A[i]<<" ";
      }
      return maxx;
    }
};

vector<int>a;
int main(){
  Solution sol;
  int n,x;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x;
    a.push_back(x);
  }
  cout<<sol.maxRotateFunction(a)<<endl;
  return 0;
}
