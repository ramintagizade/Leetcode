#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<set>
#include <sstream>
#include<queue>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
      char ans;
      int id = 0;
      for(int i=0;i<t.size();i++){
        int pos = s.find(t[i]);
        if(pos!=-1){
          //cout<<s[pos]<<endl;
          s.erase(s.begin()+pos);
        }
        else {
          ans = t[i];
        }
      }
      return ans;
    }
};


int main(){
  Solution sol;
  string str1;
  string str2;
  cin>>str1;
  cin>>str2;
  cout<<sol.findTheDifference(str1,str2)<<endl;
  return 0;
}
