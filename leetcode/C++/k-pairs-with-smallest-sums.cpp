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
    vector<pair<int, int> > kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
      vector<pair<int ,int > >temp;
      return temp;
    }
};

int n,k,x,m;
vector<int>a,b;
int main(){
  Solution sol;
  vector<pair<int ,int > >temp;
  cin>>n;
  for(int i=0;i<n;i++) {
    cin>>x;
    a.push_back(x);
  }
  cin>>m;
  for(int i=0;i<m;i++){
    cin>>x;
    b.push_back(x);
  }
  cin>>k;
  temp = sol.kSmallestPairs(a,b,k);
  return 0;
}
