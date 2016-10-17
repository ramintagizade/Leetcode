#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<ctime>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *sum  = new ListNode(0);
        ListNode *head = NULL;
        int dig1 = 0;
        int dig2  = 0;
        int carry = 0;
        int tot = 0;
        while(l1!=NULL || l2!=NULL){
          if(l2!=NULL || l1!=NULL){
            dig1 = l1 ? l1->val : 0;
            dig2 = l2 ? l2->val : 0;
            //cout<<"dig1 "<<dig1 <<" "<<"dig2 "<<dig2<<endl;
            tot = dig1 + dig2 + carry;
            if(head==NULL){
              head = new ListNode(tot%10);
              sum = head;
            }
            else if(head!=NULL){
             sum = new ListNode(tot%10);
             sum->next = head;
             head = sum;
            }
            carry = tot/10;
            l2 = l2 ? l2->next : l2;
            l1 = l1 ? l1->next : l1;
          }
        }
        if(carry>0){
          ListNode *tmp = new ListNode(carry);
          tmp -> next = sum;
          sum = tmp;
        }
        if(sum == NULL) return NULL;
        ListNode *prev = NULL, *current = NULL, *Next = NULL;
        current = sum;
        while(current != NULL){
          Next = current->next;
          current->next = prev;
          prev = current;
          current = Next;
        }
        sum = prev;
        return sum;
    }
};

int main(){
  double begin = clock();
  ListNode *l1 = new ListNode(5);
  l1->next = new ListNode(5);
  //l1->next->next = new ListNode(3);
  //l1->next->next->next = new ListNode(4);

  ListNode *l2 = new ListNode(5);
  l2->next = new ListNode(5);
  //l2->next->next = new ListNode(3);

  Solution sol;
  ListNode *res =  sol.addTwoNumbers(l1,l2);
  cout<<"result is : "<<endl;
  while(res!=NULL){
    cout<<res->val;
    res = res->next;
  }
  cout<<endl;
  cout<<"Time passed "<<(clock() - begin)/CLOCKS_PER_SEC<<endl;
  return 0;
}
/*
4321
 321
----
4642

(2 -> 4 -> 3) + (5 -> 6 -> 4)
 342
 465
----
 807

Output: 7 -> 0 -> 8
*/
