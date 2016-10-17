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
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        while(i<nums.size()-1){
            if(  nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i);
            }
            else
              i++;
        }
        return nums.size();
    }
};

int main(){
  int n;
  cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  Solution sol;
  cout<<sol.removeDuplicates(a)<<endl;
  return 0;
}
