#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size();
        int len2 = nums2.size();
        double med1 = 0;
        double med2 = 0;
        double med =0;
        if(len1==0){
          med1 = 0;
        }
        else if(len1%2==0){
          med1 = (nums1[len1/2] + nums1[len1/2-1])/2.0;
        }
        else if(len1%2==1){
          med1 = nums1[len1/2];
        }
        if(len2==0){
          med2 = 0;
        }
        else if(len2%2==0){
          med2 = (nums2[len2/2] + nums2[len2/2-1])/2.0;
        }
        else if(len2%2==1){
          med2 = nums2[len2/2];
        }
        if(med1 ==0 || med2 ==0) {
          med = max(med1,med2);
        }
        else if(med1 >0 && med2 >0 )
          med = (med1 + med2)/2;
        return med;
    }
};
int main() {
  Solution sol;
  int n = 4 ,m = 6;
  vector<int>num1(n);
  vector<int>num2(m);
  for(int i=0;i<n;i++){
    cin>>num1[i];
  }
  for(int i=0;i<m;i++){
    cin>>num2[i];
  }
  cout<<sol.findMedianSortedArrays(num1,num2)<<endl;
  return 0;
}

//[1,2,3,4]
//[2,3,5,6,7,8]
//1 2 2 3 3 4 5 6 7 8
