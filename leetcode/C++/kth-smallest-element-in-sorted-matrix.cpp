#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<set>
#include <sstream>
#include<queue>
using namespace std;

class Solution {
public:
    int kthSmallest(vector<vector<int> >& matrix, int k) {
      int n = matrix.size();
      vector<int>temp;
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          temp.push_back(matrix[i][j]);
        }
      }
      sort(temp.begin(),temp.end());
      return temp[k-1];
    }
};


vector<int>t[1000];
int n,k,x;
int main(){
  Solution sol;
  cin>>n;
  vector<vector<int> >a(n,vector<int>(n));
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>x;
      a[i][j] = x;
    }
  }
  cin>>k;
  cout<<sol.kthSmallest(a,k)<<endl;
  return 0;
}
