
class Stack
{
public:
    Node *head;
    int size;

public:
    Stack()
    {
        head = nullptr;
        size = 0;
    }
    int getSize()
    {
        return size;
    }
    bool isEmpty()
    {
        return head == nullptr;
    }
    void push(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        size++;
    }
    void pop()
    {
        if (!isEmpty())
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            size--;
        }
    }
    int getTop()
    {
        if (!isEmpty())
        {
            return head->data;
        }
        return -1;
    }
};
