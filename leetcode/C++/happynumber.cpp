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
    bool isHappy(int n) {
      int sum =0;
      map<int,int>used;
      while(n>0){
        int last = n%10;
        sum+=last*last;
        n/=10;
        if(n==0){
          if(sum==1) return true;
          if((int)log10(sum)==0 && sum*sum<10) return false;
          n = sum;
          if(used[n]) return false;
          used[n] = 1;
          sum = 0;
        }

      }
      return false;
    }
};

int main(){
  Solution sol;
  cout<<sol.isHappy(19)<<endl;
  return 0;
}
