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
    int binary_search(long long int x, int first , int last) {
      long long int minn = 0;
      while(last - first >=0) {
        int middle = (first + last)/2;
        if(((long long int )(middle+1)*(middle+1) > x) && ( (long long int )middle*middle <= x)) {
          minn = middle;
          break;
        }
        else if((long long int )middle*middle < x ){
          first = middle + 1;
        }
        else if((long long int )middle*middle > x) last = middle - 1;
      }
      return minn;
    }
    int mySqrt(int x) {

      return binary_search(x,1,x);
    }
};
int n;
int main(){
  Solution sol;
  cin>>n;
  cout<<sol.mySqrt(n)<<endl;
  return 0;
}
