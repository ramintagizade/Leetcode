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
    string convert(int n){
      string str = "";
      while(n>0){
        int last = n%2;
        str+=to_string(last);
        n/=2;
      }
      return str;
    }
    bool validUtf8(vector<int>& data) {
      int n = data.size();
      vector<string>bits(n);
      for(int i=0;i<n;i++){
        bits[i] = convert(data[i]);
        cout<<convert(data[i])<<" ";
      }
      int cnt = 0;
      int i = 0;
      while(i<bits[0].size()){
        if(bits[0][i]=='1'){
          cnt++;
        }
        else {
          break;
        }
        i++;
      }
      for(int i=1;i<n;i++){
        if(bits[i][0]=='1' && bits[i][1]=='0'){
          cnt--;
        }
        if(cnt==1) return true;
        else break;
      }
      return false;
    }
};
int n,x;
int main(){
  Solution sol;
  vector<int>data;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x;
    data.push_back(x);
  }
  cout<<sol.validUtf8(data)<<endl;
  return 0;
}
