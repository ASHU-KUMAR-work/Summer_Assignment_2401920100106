class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while(temp!= nullptr){
            temp = temp->next;
            count++;
        }
        temp = head;
        for (int i = 0; i<count/2; i++) {
            temp = temp->next;
        }

        return temp;
    }
};
