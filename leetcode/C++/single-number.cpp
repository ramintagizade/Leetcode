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
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        for(int i=0;i<n;i++){
          res^=nums[i];
        }
        return res;
    }

};

int main(){
  Solution sol;
  vector<int>a;
  a.push_back(1);
  a.push_back(2);
  a.push_back(2);
  a.push_back(3);
  a.push_back(3);
  a.push_back(4);
  a.push_back(4);
  a.push_back(5);
  a.push_back(5);
  a.push_back(6);
  a.push_back(7);
  a.push_back(8);
  a.push_back(1);
  a.push_back(8);
  a.push_back(7);
  cout<<sol.singleNumber(a)<<endl;
  return 0;
}
