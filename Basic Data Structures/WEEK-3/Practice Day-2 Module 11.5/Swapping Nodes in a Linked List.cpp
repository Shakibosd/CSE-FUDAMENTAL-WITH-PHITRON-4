/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *swapNodes(ListNode *head, int k)
    {
        int length = 0;
        ListNode *current = head;
        while (current)
        {
            length++;
            current = current->next;
        }
        ListNode *firstK = head;
        for (int i = 1; i < k; i++)
        {
            firstK = firstK->next;
        }
        ListNode *secondK = head;
        for (int i = 1; i <= length - k; i++)
        {
            secondK = secondK->next;
        }
        int temp = firstK->val;
        firstK->val = secondK->val;
        secondK->val = temp;
        return head;
    }
};