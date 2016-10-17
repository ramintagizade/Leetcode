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
    bool isPowerOfThree(int n) {
      if(n==1) return true;
      if(n%3!=0) return false;
      return (n>0)&&(1162261467%n==0);
    }
};

int main(){
  Solution sol;
  cout<<sol.isPowerOfThree(72)<<endl;
  return 0;
}
