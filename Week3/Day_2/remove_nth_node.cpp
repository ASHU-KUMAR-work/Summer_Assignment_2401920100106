class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 0;
        while(temp != nullptr){
            count++;
            temp = temp->next;
        }
        if(n==count){
            return head->next;
        }
        int del = count - n;
        temp = head;
        for(int i = 1; i < del;i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
    
};
