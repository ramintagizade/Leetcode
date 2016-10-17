#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
      while(b!=0){
        int carry = a&b;
        a = a^b;
        b = carry<<1;
      }

      return a;
    }
};
int main(){
  Solution sol;
  int a ,b;
  cin>>a>>b;
  cout<<sol.getSum(a,b)<<endl;
  return 0;
}
