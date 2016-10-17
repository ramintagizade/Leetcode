#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<set>
#include<stack>
using namespace std;
/*
struct StackGetMin {
  stack<int> pattern;
  stack<pair<int,char> >indices;
  void push(char letter ,int index) {
    pattern.push(letter);
    if (indices.empty() || index >= indices.top().first && )
      indices.push(index);
  }
  bool pop() {
    if (pattern.empty()) return false;
    if (pattern.top() == indices.top())
      indices.pop();
    pattern.pop();
    return true;
  }
  bool getMin(int &min) {
    if (indices.empty()) {
      return false;
    } else {
      min = indices.top();
      return true;
    }
  }
};
*/
class Solution {
public:
    string minWindow(string s, string t) {
      int n = s.size();
      int m = t.size();
      //stack<char>pattern;
      //stack<int>indexes;
      //map<int , vector<int> > mp;
      map<char , int >mp;
      vector<pair<char ,int> >pattern(m);
      vector<pair<int, int >  >indices(m);
      map<char , pair<int , int > >mpIndex;
      for(int i=0;i<m;i++){
        mp[t[i]] = -1;
      }
      int cnt =0;
      int minWindow = 1000;
      int minIndex = 0;
      bool update = false;
      for(int i=0;i<n;i++){
        update = true;
        if(mp[s[i]]==-1){
          indices[s[i]].first = i+1;
          indices[s[i]].second = cnt;
          mpIndex[s[i]].first = i+1;
          mpIndex[s[i]].second = cnt;
          cnt++;
          mp[s[i]] = i+1;
          pattern.push_back(make_pair(s[i],i+1));
          cout<<cnt<<endl;
          update = false;
        }
        //update
        if(mp[s[i]] && update){
           minIndex = mp[s[i]];
           cout<<"vow update"<<endl;
           cout<<" value to be updated "<< s[i]<<" "<<mpIndex[s[i]].first<<" "<<mpIndex[s[i]].second<<endl;
           indices.erase(indices.begin()+mpIndex[s[i]].second,indices.end());
           for(int i=0;i<m;i++){
             if(indices[t[i]].first)
             cout<<t[i]<<" "<<indices[t[i]].first<<" "<<indices[t[i]].second<<endl;
           }
           mp[s[i]] = i+1;
        }
        if(cnt==m){
          minWindow = min(minWindow , i - 0);
          cout<<"full "<<endl;
        }
      }
      return "string";
    }
};

      /*          B
                C
                D
                //B
C  min          //A

min = (letter , index);
A     min = A - C
B
C      min = C - A;
//B removed
//A removed   */

/*ADOBECODEBANC
ABC

A->0 B->3 C->5 = 6
     B->9
A->10     C->12  = 4
*/
int main() {
  string text;
  string pattern;
  cin>>text;
  cin>>pattern;
  Solution sol;
  cout<<sol.minWindow(text,pattern)<<endl;
  return 0;
}
