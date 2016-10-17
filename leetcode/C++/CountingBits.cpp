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

    vector<int> countBits(int num) {
      vector<int>temp(num+1,0);
      for(int i=1;i<=num;i++){
        temp[i] = temp[i&(i-1)] +1;
        //cout<<"i "<<i<<" "<<"i&(i-1) "<<(i&(i-1))<<" "<<endl;
      }
      return temp;
    }
};
int n;
int main(){
  cin>>n;
  Solution sol;
  sol.countBits(n);
  return 0;
}
