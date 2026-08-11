class Solution {
public:
      void reverse(ListNode* head,int times){
        ListNode* prev= NULL;
        ListNode* curr= head;
        while(times--){
        ListNode* nex= curr->next;    
        curr->next = prev;
        prev=curr;
        curr=nex;
      } 
       return ;
    } 
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr)
        return nullptr;
        ListNode* left = head;
        ListNode* right;
        ListNode* res=nullptr;
        ListNode* prevleft=nullptr;
        int size=2;
        while(true){
            right=left;
            for(int i=0;i<size-1;i++){
                if(right==nullptr)
                break;
                right=right->next;
            }
            if(right){ //left right mil chuka hai
                ListNode* nextleft=right->next;
                reverse(left,size);
                if(prevleft)
                prevleft->next=right;
                prevleft=left;
                if(res==nullptr)
                res=right;
                left=nextleft;
            } 
            else{
               if(prevleft)
               prevleft->next=left;
               if(res==nullptr)
               res=left;

               break;

            }
        } 
        return res;
    }
};
