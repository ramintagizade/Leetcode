#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

class Solution {
  public:
  vector<int>order;
  vector<int> lexicalOrder(int n) {
    vector<int>temp;
    generateLexic(1,n);
    temp = order;
    //for(int i=0;i<temp.size();i++)
    //  cout<<temp[i]<<" ";
    return temp;
  }
  void generateLexic(int low , int up){
    for(int i=1;i<10;i++){
      generateLexic(low,up,i);
    }
  }
  void generateLexic(int low, int up , int current) {
    if(low<=current && current<=up){
      order.push_back(current);
    }
    if(current > up) return;
    for(int i=0;i<10;i++){
      generateLexic(low,up,10*current + i);
    }
  }
};
int n;
int main(){
  cin>>n;
  Solution sol;
  sol.lexicalOrder(n);
  return 0;
}
