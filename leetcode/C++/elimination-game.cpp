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
    int lastRemaining(int n) {
      vector<int>game;
      for(int i=2;i<=n;i+=2){
        game.push_back(i);
      }
      int pos =0;
      bool turn = false;
      int gm = game.size();
      while(game.size()>1){
        gm = game.size();
        if(!turn){
          reverse(game.begin(),game.end());
        }
        while(game.size()>gm/2){
          if(turn){
            game.erase(game.begin()+pos);
            pos+=1;
          }
          else {
            game.erase(game.begin()+pos);
            pos++;
          }
        }
        pos = 0;
        turn = !turn;

        if(turn){
          reverse(game.begin(),game.end());
        }

      }
      return game[0];
    }
    int lastRemaining2(int n) {
      int head  = 1;
      int left = n;
      int steps = 1;
      bool moveHead = true;
      while(left>1){
        if(moveHead || left&1){
          head = head + steps;
        }
        moveHead=!moveHead;
        steps = 2*steps;
        left/=2;
      }
      return head;
    }
};
int n;
int main(){
  Solution sol;
  cin>>n;
  cout<<sol.lastRemaining2(n)<<endl;
  return 0;
}
