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
    static bool cmp(string a  , string b ){
      string nat = a+b;
      string rev = b+a;
      //cout<<nat<<" "<<rev<<" "<<nat.compare(rev)<<endl;
      if(nat.compare(rev)>0) return 1;
      return 0;
    }
    string largestNumber(vector<int>& nums) {
      vector<string>lexic;
      int n = nums.size();
      for(int i=0;i<n;i++){
        lexic.push_back(to_string(nums[i]));
      }
      sort(lexic.begin(),lexic.end(),cmp);
      string number = "";
      for(int i=0;i<n;i++) number+=lexic[i];
      if(number[0]=='0'){
       return "0";
      }
      return number;
    }
};
int n,x;
vector<int>a;
int main(){
  Solution sol;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x;
    a.push_back(x);
  }
  cout<<sol.largestNumber(a)<<endl;
  return 0;
}
