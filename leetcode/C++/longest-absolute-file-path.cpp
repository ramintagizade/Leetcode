#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
#include<map>
using namespace std;

class Solution {
  public:
    int lengthLongestPath(string input) {
      int n = input.size();
      int dirs = 0;
      int maxLength = 0;
      int curLength = 0;
      int curLenDepth[5][n][n];
      int file = 0;
      for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
          curLenDepth[0][i][j] = 0;
          curLenDepth[1][i][j] = 0;
        }
      }
      int depth = 0;
      int maxDepth = 0;
      int level = 0;
      for(int i=0;i<n;i++){
        if((input[i]>='a' && input[i]<='z')  || input[i]=='.' || (input[i]>='0' && input[i]<='9')){
          curLength++;
          if(input[i]=='.')
            file = 1;
          if(file==1) {
            curLenDepth[file][level][depth]+=curLenDepth[!file][level][depth];
            curLenDepth[!file][level][depth] = 0;
          }
          curLenDepth[file][level][depth]++;
        }
        if(input[i]=='\n'){
          maxLength = max(curLength,maxLength);
          depth = 0;
          level++;
          file = 0;
        }
        if(input[i]=='\t'){
          depth++;
          maxDepth = max(maxDepth,depth);
        }
      }
      for(int i=0;i<=level;i++){
        cout<<"level "<<i<<" : ";
        for(int j=0;j<=depth;j++){
              if(curLenDepth[1][i][j])
                cout<<curLenDepth[1][i][j]<<" file  "<<j<<" depth "<<endl;
              if(curLenDepth[0][i][j])
                cout<<curLenDepth[0][i][j]<<" "<<j<<" depth "<<endl;
        }
        cout<<endl;
      }
      return curLength;
    }
};

string str;
int main() {
  //cin>>str;
  str = "dir\n\tsubdir1\n\t\tfile1.ext\n\t\tsubsubdir1\n\tsubdir2\n\t\tsubsubdir2\n\t\t\tfile2.ext";
  //str = "dir\n\tsubdir1\n\tsubdir2\n\t\tfile.ext";
  Solution sol;
  cout<<sol.lengthLongestPath(str)<<endl;
  return 0;
}
/*
dir\subdir1\file1.ext
dir\subdir2\subsubdir2\file2.ext

dir\n 0
\tsubdir1\n 1
\t\tfile1.ext\n 2
\t\tsubsubdir1\n 2
\tsubdir2\n 1
\t\tsubsubdir2\n 2
\t\t\tfile2.ext 3
*/
