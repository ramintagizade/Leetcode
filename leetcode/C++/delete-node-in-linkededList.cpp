#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<set>
using namespace std;


//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
  };
class Solution {
public:
    void deleteNode(ListNode* node) {
      ListNode *temp = node->next;
      node->val = temp->val;
      node->next = temp->next;
      free(temp);
    }
};


int main(){
  ListNode *node = new ListNode(1);
  node->next = new ListNode(2);
  node->next->next = new ListNode(3);
  node->next->next->next = new ListNode(4);
  Solution sol;
  sol.deleteNode(node->next->next);
  while(node!=NULL){
    cout<<node->val<<endl;
    node = node->next;
  }
  return 0;
}
