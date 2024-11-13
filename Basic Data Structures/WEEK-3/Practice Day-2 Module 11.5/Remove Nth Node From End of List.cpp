
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        if (!head){
            return NULL;
        }
        int count = 0;
        ListNode *temp = head;
        while (temp)
        {
            count++;
            temp = temp->next;
        }
        int position = count - n + 1;
        ListNode *prev = NULL;
        temp = head;
        for (int i = 1; i < position; i++)
        {
            prev = temp;
            temp = temp->next;
        }
        if (position == 1)
        {
            head = head->next;
        }
        else
        {
            prev->next = temp->next;
        }
        delete temp;
        return head;
    }
};