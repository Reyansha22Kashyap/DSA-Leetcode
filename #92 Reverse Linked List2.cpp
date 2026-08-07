class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==nullptr){
            return nullptr;
        }
        if(left==right){
            return head;
        }
        ListNode* t = head;
        ListNode* before = nullptr;
        int pos = 1;
        while(t!=nullptr){
            if(pos<left){
                before=t;
                t=t->next;
                pos++;
                continue;
            }
            ListNode* curr = t;
            ListNode* prev = nullptr;
            int times = right-left+1;
            while(times--){
                ListNode* nex= curr->next;
                curr->next = prev;
                prev=curr;
                curr=nex;
            }
            t->next=curr;
            if(before){
                before->next=prev;
                return head;
            } else{
                return prev;
            }
        }
            return head;   
    }
};
