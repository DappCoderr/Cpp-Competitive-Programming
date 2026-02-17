#include <iostream>
using namespace std;

// Define: singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

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

// Function to print linked list
void printList(ListNode* head){
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    // Creating first number: 342 (stored as 2->4->3)
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    // Creating second number: 465 (stored as 5->6->4)
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    ListNode* res = addTwoNumbers(l1, l2);

    printList(res);  // Expected: 7 0 8

    return 0;
}