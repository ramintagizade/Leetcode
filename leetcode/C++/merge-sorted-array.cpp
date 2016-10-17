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
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int>temp(m);
        int i1 = 0;
        int i2 = 0;
        int i = 0;
        while(i1<n1 && i2<n2 && i<m){
            if(nums1[i1]==nums2[i2]){
                temp[i] = nums1[i1];
                i++;
                i1++;
                if(i<m){
                    temp[i] = nums2[i2];
                    i++;
                    i2++;
                }
            }
            else if(nums1[i1]<nums2[i2]){
                temp[i] = nums1[i1];
                i++;
                i1++;
            }
            else {
                temp[i] = nums2[i2];
                i++;
                i2++;
            }
        }
        nums2 = temp;
    }
};

int main(){
  int n,m;
  vector<int>a(n);
  vector<int>b(m);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<m;i++){
    cin>>b[i];
  }
  Solution sol;
  vector<int>temp;
  sol.merge(a,m,b,n);
  for(int i=0;i<n+m;i++){
    cout<<a[i]<<" ";
  }
  return 0;
}
