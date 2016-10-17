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
    double pow(double x , int n ){
      double res = 1.0;
      if(n==0) return 1;
      res = pow(x,n/2);
      if(!(n&1)) return res*res;
      else {
        if(n>0) return x*res*res;
        else return (res*res)/x;
      }
    }
    double myPow(double x, int n) {
      return pow(x,n);
    }
};
int main(){
  double x;
  int n;
  cin>>x>>n;
  Solution sol;
  cout<<sol.myPow(x,n)<<endl;
  return 0;
}
