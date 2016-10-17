#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

class Solution {
public:
    int addDigits1(int num) {
      int sz = log10(num);
      int sum =0;
      while(1){
        sum+=num%10;
        num/=10;
        if(num==0){
          if(sum/10 <1) break;
          else{
            num = sum;
            sum = 0;
          }
        }
      }
      return sum;
    }
    int addDigits(int num ){
      int digitalRoot  = num - 9*((num-1)/9);
      int digitalRoot2 = 1 +  (num-1)%9;
      return digitalRoot2;
    }
};

int main(){
  int n;
  cin>>n;
  Solution sol;
  cout<<sol.addDigits(n)<<endl;
  return 0;
}
