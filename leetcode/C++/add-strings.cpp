#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<set>
#include <sstream>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
      if(num1.size() < num2.size()) swap(num1,num2);
      int len1 = num1.size();
      int len2 = num2.size();
      int i = 0, j = 0;
      int carry = 0;
      string res = "";
      reverse(num1.begin(),num1.end());
      reverse(num2.begin(),num2.end());
      while(i<len1){
        if(j<len2) {
          res+= (num1[i]-'0' + num2[i]-'0' +carry)%10 + '0';
          carry = (num1[i]-'0' + num2[i]-'0'  + carry)/10;
        }
        else{
          res+= (num1[i]-'0' + carry)%10 + '0';
          carry = (num1[i]-'0' + carry)/10;
        }
        i++;
        j++;
      }
      if(carry>0)
        res+= carry+'0';
      reverse(res.begin(),res.end());
      return res;
    }
};
string num1,num2;
int main(){
  cin>>num1;
  cin>>num2;
  Solution sol;
  cout<<sol.addStrings(num1,num2)<<endl;
  return 0;
}
