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
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        set<int>set1;
        set<int>set2;
        for(int i=0;i<n1;i++){
          set1.insert(nums1[i]);
        }
        for(int i=0;i<n2;i++){
          set2.insert(nums2[i]);
        }
        set<int>::iterator it;
        vector<int>ans(set1.size());
        int cnt = 0;
        for(it = set1.begin();it!=set1.end();it++){
            if(set2.find(*it)!=set2.end()){
              ans[cnt] = *it;
              cnt++;
            }
        }
        ans.resize(cnt);
        return ans;
    }
};

int main() {
  Solution sol;
  vector<int>a(6);
  vector<int>b(5);
  for(int i=0;i<6;i++){
    cin>>a[i];
  }
  for(int i=0;i<5;i++){
    cin>>b[i];
  }
  for(int i=0;i<sol.intersection(a,b).size();i++){
    cout<<sol.intersection(a,b)[i]<<" ";
  }
  return 0;
}
