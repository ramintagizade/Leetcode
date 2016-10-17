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
    vector<int> plusOne(vector<int>& digits) {
        vector<int>temp(digits.size()+1);
        digits[digits.size()-1]+=1;
        for(int i=1;i<=digits.size();i++){
          temp[i] = digits[i-1];
        }
        temp[0] = 0;
        for(int i=temp.size()-1;i>=1;i--){
          if(temp[i]==10){
            temp[i] = 0;
            temp[i-1]+=1;
          }
        }
        if(temp[0]==0) temp.erase(temp.begin());
        return temp;
    }
};

int main(){
  Solution sol;
  int n;
  cin>>n;
  vector<int>dig(n);
  for(int i=0;i<n;i++){
    cin>>dig[i];
  }
  vector<int>temp;
  temp = sol.plusOne(dig);
  for(int i=0;i<temp.size();i++){
    cout<<temp[i]<<" ";
  }
  cout<<endl;
  return 0;
}
