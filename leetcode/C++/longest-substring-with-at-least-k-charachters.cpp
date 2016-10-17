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
#define MAX 100001
#define ll long long int
#define eps 1e-7
using namespace std;

class Solution {
public:
    int longestSubstring(string s, int k) {
      int n = s.size();
      int maxx = 0;
      map<char,int >freq;
      map<char ,int >id;
      for(int i=0;i<n;i++){
        freq[s[i]]++;
      }
      int cnt =0;
      for(int i=0;i<n;i++){
        if(freq[s[i]]>=k){
          cnt++;
          maxx = max(maxx, cnt);
        }
        else {
          freq[s[i-1]]--;
          cnt = 0;
        }
      }
      return maxx;
};

int main(){
  int k;
  string s;
  cin>>s;
  cin>>k;
  Solution sol;
  cout<<sol.longestSubstring(s,k)<<endl;
  return 0;
}
//abaaabdaacbcabcb
//1123421121123233
