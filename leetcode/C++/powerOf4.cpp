#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<set>
#include<stdio.h>
#include<stdlib.h>
#include<iomanip>
#include <queue>
#define MAX 100001
#define pii pair< int, int >
#define pii2 pair< pair <int , char > , ll >
#define pb(x) push_back(x)
#define mk(x,y) make_pair(x,y)
#define ll long long int
#define eps 1e-7
#define INF  100000007;
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int num) {
      if(num==1) return true;
      if(num%4!=0) return false;
      if(num&(num-1)) return false;
      return (num&(0x55555555));
    }
};
int main(){
  Solution sol;
  cout<<sol.isPowerOfFour(-64)<<endl;
  return 0;
}
