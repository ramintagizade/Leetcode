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
#define MAX 100001
#define ll long long int
#define eps 1e-7
using namespace std;


class Solution {
public:
    int minPathSum(vector<vector<int> >& grid) {
      int m = grid.size();
      int n = grid[0].size();
      int path[m][n];

      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
          if(i==0 &&  j==0) continue;
          else if(i==0){
            grid[i][j]+=grid[i][j-1];
          }
          else if(j==0){
            grid[i][j]+=grid[i-1][j];
          }
          else
            grid[i][j]+=min(grid[i-1][j],grid[i][j-1]);
        }
      }
      return grid[m-1][n-1];
    }
};

int n , m;
int main(){
  cin>>m>>n;
  vector< vector<int> > grid(m,vector<int>(n,0));
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>grid[i][j];
    }
  }
  Solution sol;
  cout<<sol.minPathSum(grid)<<endl;
  return 0;
}
/*
1 2 3
4 1 5
3 2 6

path[0][0]+path[0][1]+{path[0][2]+{path[1][2]},path[1][1]+{path[1][2],path[2][1]}} + path[2][2]

path[0][0]+path[1][0]+{path[1][1]+{path[1][2],path[2][1]},path[2][0]+{path[2][1]}} + path[2][2]

*/
