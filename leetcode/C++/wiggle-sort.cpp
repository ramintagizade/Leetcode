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
    void wiggleSort(vector<int>& nums) {
      int n = nums.size();
      for(int i=0;i<n;i++){
        
      }
    }
};

int n;
int x;
vector<int>a;
int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x;
    a.push_back(x);
  }
  Solution sol;
  sol.wiggleSort(a);
  for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
  cout<<endl;
  return 0;
}
