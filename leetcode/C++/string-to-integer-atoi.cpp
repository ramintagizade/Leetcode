#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<limits.h>
#include<iomanip>
using namespace std;

using namespace std;

class Solution {
public:
    int myAtoi(string str) {
      int n = str.size();
      int num = 0;
      int i =0;
      int sign = 1;
      while(str[i]==' ') i++;
      if(str[i]=='-' || str[i]=='+'){
        sign = 1 - 2*(str[i++]=='-');
      }
      long long int temp2 = 0;
      while(str[i]>='0' && str[i]<='9'){
          num = num*10 + str[i]-'0';
          temp2 = temp2*10 + str[i] -'0';
          if(sign*temp2 > 2147483647 ) return 2147483647;
          if(sign*temp2 < -2147483648) return -2147483648;
          i++;
      }
      return num*sign;
    }
};
int main(){
  string s;
  cin>>s;
  Solution sol;
  cout<<sol.myAtoi(s)<<endl;
  return 0;
}
