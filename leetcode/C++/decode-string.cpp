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
#define MAX 100001
#define ll long long int
#define eps 1e-7
using namespace std;

class Solution {
public:
    string appd(int k , string s) {
      string temp = "";
      while(k>0){
        temp+=s;
        k--;
      }
      return temp;
    }
    string decodeString(string s) {
      int n = s.size();
      string num = "";
      stack<int>st;
      stack<string>sst;
      string append = "";
      string str;
      int i = 0;
      while(i<n){
        if(isdigit(s[i])){
          while(isdigit(s[i])){
            num+=s[i];
            i++;
          }
          st.push(stoi(num));
          num = "";
        }
        else if(s[i]=='['){
          sst.push(str);
          str.clear();
          i++;
        }
        else if(s[i]==']'){
          string t = sst.top();
          sst.pop();
          int k = st.top();
          st.pop();
          t+=appd(k,str);
          str = t;
          i++;
        }
        else {
          str.push_back(s[i]);
          i++;
        }
      }
      return str;
    }
};

int main() {
  Solution sol;
  string s;
  cin>>s;
  cout<<sol.decodeString(s)<<endl;
  return 0;
}
// s = "3[a2[c]]", return "accaccacc".
