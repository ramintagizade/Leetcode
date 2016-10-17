#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<limits.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
      int rev = 0;
      bool neg = 0;
      if(x < 0 ) {
        neg = 1;
        x = -x;
      }
      int sz = log10(x);
      while(x>0){
        int last = x%10;
        x/=10;
        rev+=pow(10,sz)*last;
        sz--;
      }
    if(rev < 0) return 0;
    if(neg) rev = -rev;
    return rev;
  }
};
int main(){
  int n;
  cin>>n;
  Solution sol;
  cout<<sol.reverse(n)<<endl;
  return 0;
}
