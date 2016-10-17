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
    bool isAnagram(string s, string t) {
        int has[202];
        int has2[202];
        for(char i='a';i<='z';i++){
          has[i] = 0;
          has2[i] = 0;
        }
        for(int i=0;i<max(s.size(),t.size());i++){
            has[s[i]]++;
            has2[t[i]]++;
        }
        for(char i = 'a';i!='z';i++){
          if(has[i]!=has2[i]) return false;
        }
        return true;
    }
};
string s,t;
int main(){
  Solution sol;
  cin>>s;
  cin>>t;
  cout<<sol.isAnagram(s,t)<<endl;
  return 0;
}
