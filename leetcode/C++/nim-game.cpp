#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

class Solution {
public:
    bool canWinNim(int n) {
      return n%4!=0;
    }
};

int main(){
  ios::sync_with_stdio (false);
  double begin = clock();
  Solution sol;
  int n;
  scanf("%d",&n);
  printf("%d\n",sol.canWinNim(n));
  printf("%f\n",(clock()-begin)/CLOCKS_PER_SEC);
  return 0;
}
