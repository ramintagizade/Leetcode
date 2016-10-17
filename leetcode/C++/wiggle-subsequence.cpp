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
#define MAX 100001
#define ll long long int
#define eps 1e-7
using namespace std;

class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
      int n = nums.size();
      vector<int>dp;
      int sign = 1;
      int cnt = 1;
      int last  = nums[0];
      int nextSign = -1;
      for(int i=1;i<n;i++){
        if((nums[i]-last) > 0 ){
          if(nextSign==1){
            nextSign = -1;
            cnt++;
          }
          else if(cnt==1){
            nextSign = -1;
            cnt++;
          }
          last = nums[i];
          cout<<"done 1 "<<cnt<<endl;
        }
        else if(nums[i]-last < 0){
          if(nextSign==-1){
            nextSign = 1;
            cnt++;
          }
          else if(cnt==1){
            nextSign = 1;
            cnt++;
          }
          last = nums[i];
          cout<<"done2 "<<cnt<<endl;
        }
        else if(nums[i]-last==0){
          continue;
          last = nums[i];
        }
        //last = nums[i];
      }
      return cnt;
    }
};

vector<int>a;
int n,x;
int main() {
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x;
    a.push_back(x);
  }
  Solution sol;
  cout<<sol.wiggleMaxLength(a)<<endl;
  return 0;
}

/* [1,2,3,4,5,6,7,4,3,2,4,9,2,3]
1 ->1
1 2 -> 2
1 3 -> 2
1 4 ->2
1 5 ->2
1 6 -> 2
1 7 -> 2
1 7 4 ->3
1 7 3 ->3
1 7 2 ->3
1 7 2 4 -> 4
1 7 2 9 -> 4
1 7 2 9 2 ->5
1 7 2 9 2 3 ->6
*/
