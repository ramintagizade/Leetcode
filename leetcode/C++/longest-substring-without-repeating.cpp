#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<ctime>
#include<string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int n = s.size();
      if(n==0) {
        return 0;
      }
      int maxLen = 1;
      int used[500] ={0};
      int j = -1;
      for(int i=0;i<n;i++){
        if(j < used[s[i]]-1)
          j = used[s[i]]-1;
        if(used[s[i]]){
            used[s[i]] = i+1;
        }
        else if(!used[s[i]]){
          used[s[i]] = i+1;
        }
        maxLen = max(maxLen,abs(j-i));
      }
      return maxLen;
    }
};

string str;
int main() {
  double begin = clock();
  Solution sol;
  cin>>str;
  cout<<sol.lengthOfLongestSubstring(str)<<endl;
  cout<<"Time passed "<<(clock() -begin)/CLOCKS_PER_SEC<<endl;
  return 0;
}
