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
#define ll long long int
#define eps 1e-7
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
      rowIndex = rowIndex+1;
      vector<vector<int> >pascal(rowIndex);
      vector<int>ans;
      for(int i=0;i<rowIndex;i++){
        pascal[i].resize(i+1);
      }
      pascal[0][0] = 1;
      for(int i=0;i<rowIndex;i++){
        for(int j=0;j<pascal[i].size();j++){
          if(i==0 && j==0) continue;
          else if(j==0){
            pascal[i][j] = pascal[i-1][j];
          }
          else if(j==pascal[i].size()-1){
            pascal[i][j] = pascal[i-1][j-1];
          }
          else {
            pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
          }
        }
      }
      ans = pascal[rowIndex-1];
      return ans;
    }
};

int main(){
  int r;
  cin>>r;
  Solution sol;
  vector<int>temp;
  temp = sol.getRow(r);
  for(int i=0;i<temp.size();i++){
    cout<<temp[i]<<" ";
  }
  cout<<endl;
  return 0;
}
