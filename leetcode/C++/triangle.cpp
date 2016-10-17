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
#include<stack>
#include<iomanip>
#define MAX 100001
#define ll long long int
#define eps 1e-7
using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int> >& triangle) {
      int n = triangle.size();
      for(int i=0;i<n;i++){
        for(int j=0;j<triangle[i].size();j++){
          if(i==0 && j==0 ) continue;
          else if(j==0){
            triangle[i][j]+=triangle[i-1][j];
          }
          else if(j==triangle[i].size()-1){
            triangle[i][j]+=triangle[i-1][j-1];
          }
          else {
            triangle[i][j]+=min(triangle[i-1][j-1],triangle[i-1][j]);
          }
        }
      }
      int minn = INT_MAX;
      for(int i=0;i<triangle[n-1].size();i++){
        minn = min(minn, triangle[n-1][i]);
      }
      return minn;
    }
};

int n , m;
int main(){
  cin>>m;
  vector<vector<int> >grid(m);
  for(int i=0;i<m;i++){
    cin>>n;
    grid[i].resize(n);
    for(int j=0;j<n;j++){
      cin>>grid[i][j];
    }
  }
  Solution sol;
  cout<<sol.minimumTotal(grid)<<endl;
  return 0;
}
