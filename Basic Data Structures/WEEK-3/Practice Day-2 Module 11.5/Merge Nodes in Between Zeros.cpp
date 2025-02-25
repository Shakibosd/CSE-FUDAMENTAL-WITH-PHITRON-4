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
    ListNode *mergeNodes(ListNode *head)
    {
        ListNode *dummy = new ListNode(0, head);
        ListNode *prev = dummy;
        ListNode *curr = head;

        int sum = 0;
        while (curr)
        {
            if (curr->val == 0)
            {
                if (sum > 0)
                {
                    prev->next = new ListNode(sum);
                    prev = prev->next;
                }
                sum = 0;
            }
            else
            {
                sum += curr->val;
            }
            curr = curr->next;
        }

        prev->next = nullptr;
        return dummy->next;
    }
};