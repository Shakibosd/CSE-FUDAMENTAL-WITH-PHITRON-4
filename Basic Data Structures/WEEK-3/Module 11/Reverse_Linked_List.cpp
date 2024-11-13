class Solution {
public:
    void revers_node(ListNode *&head, ListNode *cur){
        if(cur->next == NULL){
            head = cur;
            return;
        }
        revers_node(head, cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    }
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        revers_node(head,head);
        return head;
    }
};