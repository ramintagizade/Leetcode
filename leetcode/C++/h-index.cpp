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
    int binary_search(vector<int>a){
      int n = a.size();
      int left = 0;
      int right = n-1;
      sort(a.begin(),a.end());
      while(left<=right){
        int mid = (left+right)/2;
        if(a[mid]< (n - mid)){
          left = mid+1;
        }
        else {
          right = mid-1;
        }
      }
      return n - left;
    }
    int hIndex(vector<int>& citations) {
     set<int>cit;
     int h = binary_search(citations);
     return h;
    }
};
vector<int>a;
int n;
int x;
int main(){
  Solution sol;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x;
    a.push_back(x);
  }
  cout<<sol.hIndex(a)<<endl;
  return 0;
}
