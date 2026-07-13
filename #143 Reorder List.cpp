class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
        } 
         ListNode* second = slow->next;
         slow->next = nullptr;

         ListNode* prev = nullptr;
         ListNode* curr = second;
         ListNode* next; 

         while(curr!=nullptr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
         } 
         second = prev; 

         ListNode* first = head;

         while(second!=nullptr){
            ListNode* tmp1 = first->next;
            ListNode* tmp2 = second->next;
            first->next = second;
            second->next = tmp1; 
            first = tmp1;
            second = tmp2;
         }
    }
};
