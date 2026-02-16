#include<iostream>
using namespace std;

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        
        int carry = 0;
        
        while(l1 != NULL || l2 != NULL || carry != 0){
            
            int sum = carry;
            
            if(l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            
            if(l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            
            carry = sum / 10;
            
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
        }
        
        return dummy->next;
}

int main(){
    ListNode* l1, l2, res;
    res = addTwoNumbers(l1.l2);
    cout<<res<<endl;
    return 0;
}