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
#define ll long long int
#define eps 1e-7
#define INF  100000007;
using namespace std;

class NumArray {
public:
    int a[MAX];
    int tree[MAX*3];
    int sz;
    NumArray(vector<int> &nums) {
      sz = nums.size();
      for(int i=0;i<sz;i++){
        a[i] = nums[i];
      }
    }

    void update(int i, int val) {
      add(1,0,sz-1,i,val);
    }

    int sumRange(int i, int j ) {
      return range(1,i,j);
    }
    void add(int node, int first ,int last ,int idx , int val ){
      if(first==last){
        tree[node]=val;
        a[idx]=val;
      }
      else {
        int middle = (first+last)/2;
        if(idx>=first && idx<=middle){
          add(2*node,first,middle,idx,val);
        }
        else {
          add(2*node+1,middle+1,last,idx,val);
        }
      }
      tree[node] = tree[node*2] + tree[node*2+1];
    }
    int range(int node , int first , int last) {
      if(first==last){
        tree[node]=a[first];
      }
      else {
        int middle = (first+last)/2;
        range(2*node,first,middle);
        range(2*node+1,middle+1,last);
        tree[node] = tree[2*node] + tree[node*2+1];
      }
      return tree[node];
    }
};

vector<int>a;
int main(){
  int n ;
  cin>>n;
  int x;
  for(int i=0;i<n;i++){
    cin>>x;
    a.push_back(x);
  }
  NumArray num(a);
  cout<<num.sumRange(0,2)<<endl;
  num.update(1,2);
  cout<<num.sumRange(0,2)<<endl;
  return 0;
}

// Your NumArray object will be instantiated and called as such:
// NumArray numArray(nums);
// numArray.sumRange(0, 1);
// numArray.update(1, 10);
// numArray.sumRange(1, 2);
