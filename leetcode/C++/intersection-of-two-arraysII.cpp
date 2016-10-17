#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<set>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int>set1;
        vector<int>set2;
        if(n1 >= n2){
          set1 = nums1;
          set2 = nums2;
        }
        else if(n1 < n2) {
          set1 = nums2;
          set2 = nums1;
        }
        vector<int>::iterator it;
        vector<int>ans;
        for(int i=0;i<set1.size();i++){
          it = find(set2.begin(),set2.end(),set1[i]);
          if(it!=set2.end()){
            ans.push_back(*it);
            set2.erase(it);
          }
        }
        return ans;
    }
};

int main() {
  Solution sol;
  vector<int>a(4);
  vector<int>b(2);
  for(int i=0;i<4;i++){
    cin>>a[i];
  }
  for(int i=0;i<2;i++){
    cin>>b[i];
  }
  sol.intersect(a,b);
  return 0;
}
