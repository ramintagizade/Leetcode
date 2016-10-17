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
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int ,int >freq;
        int n = nums.size();
        for(int i=0;i<n;i++){
            freq[nums[i]+5000]++;
        }
        set<pair<int,int > >dist;
        for(int i=0;i<n;i++){
            if(freq[nums[i]+5000]){
                dist.insert(make_pair(nums[i],freq[nums[i]+5000]));
            }
        }
        vector<pair<int,int > >elem;
        priority_queue<  pair<int ,int > > Q;
        elem.assign(dist.begin(),dist.end());
        n = elem.size();
        for(int i=0;i<n;i++){
          Q.push(make_pair(elem[i].second,elem[i].first));
        }
        vector<int>temp;
        for(int i=0;i<k;i++){
          temp.push_back(Q.top().second);
          Q.pop();
        }
        return temp;
    }
};

int n,k;
int x;
vector<int>a;
int main(){
  Solution sol;
  cin>>n>>k;
  for(int i=0;i<n;i++) {
    cin>>x;
    a.push_back(x);
  }
  vector<int>temp;
  temp = sol.topKFrequent(a,k);
  for(int i=0;i<temp.size();i++){
    cout<<temp[i]<<" ";
  }
  cout<<endl;
  return 0;
}
