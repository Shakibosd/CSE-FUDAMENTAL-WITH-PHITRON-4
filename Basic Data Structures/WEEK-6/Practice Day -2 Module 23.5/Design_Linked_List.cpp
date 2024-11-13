class MyLinkedList
{
public:
    MyLinkedList()
    {
        head = nullptr;
    }
    int get(int index)
    {
        if (index < 0 || index >= size)
        {
            return -1;
        }
        ListNode *current = head;
        for (int i = 0; i < index; ++i)
        {
            current = current->next;
        }
        return current->val;
    }
    void addAtHead(int val)
    {
        ListNode *newNode = new ListNode(val);
        newNode->next = head;
        head = newNode;
        size++;
    }
    void addAtTail(int val)
    {
        ListNode *newNode = new ListNode(val);
        if (!head)
        {
            head = newNode;
        }
        else
        {
            ListNode *current = head;
            while (current->next)
            {
                current = current->next;
            }
            current->next = newNode;
        }
        size++;
    }
    void addAtIndex(int index, int val)
    {
        if (index < 0 || index > size)
        {
            return;
        }
        if (index == 0)
        {
            addAtHead(val);
        }
        else if (index == size)
        {
            addAtTail(val);
        }
        else
        {
            ListNode *newNode = new ListNode(val);
            ListNode *current = head;
            for (int i = 0; i < index - 1; i++)
            {
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
            size++;
        }
    }
    void deleteAtIndex(int index)
    {
        if (index < 0 || index >= size)
        {
            return;
        }
        ListNode *temp;
        if (index == 0)
        {
            temp = head;
            head = head->next;
        }
        else
        {
            ListNode *current = head;
            for (int i = 0; i < index - 1; i++)
            {
                current = current->next;
            }
            temp = current->next;
            current->next = temp->next;
        }
        delete temp;
        size--;
    }

public:
    ListNode *head;
    int size = 0;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */