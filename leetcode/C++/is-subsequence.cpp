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
#define MAX 100001
#define ll long long int
#define eps 1e-7
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
      int ss = s.size();
      int tt = t.size();
      int first = 0;
      int cnt = 0;
      while(cnt<ss && first < tt){
        if(t[first]==s[cnt]){
          cnt++;
        }
        first++;
      }
      if(cnt!=ss) return false;
      return true;
    }
};

int main() {
  Solution sol;
  string s , t;
  cin>>s>>t;
  cout<<sol.isSubsequence(s,t)<<endl;
  return 0;
}
