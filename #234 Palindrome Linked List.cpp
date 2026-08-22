class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast->next!=nullptr && fast->next->next!=nullptr){
            slow=slow->next;
            fast=fast->next;
            fast=fast->next;
        } 
        ListNode* second=slow->next;
        ListNode* prev=nullptr;
        ListNode* curr=second;
        ListNode* next;
       while(curr!=nullptr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        } 
        second=prev;

        ListNode* first=head;
        while(second!=nullptr){
            if(first->val!=second->val){
                return false;
            } 
            first=first->next;
            second=second->next;

            
        } 
             return true;
    } 
           
};
