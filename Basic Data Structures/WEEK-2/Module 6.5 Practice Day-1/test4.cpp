/*Question: Take a singly linked list as input, then take q queries. In each query you will be given an index and value. You need to insert those values in the given index and print the linked list. If the index is invalid print “Invalid”.



Sample Input
Sample Output
10 20 30 -1
7
1 40
5 50
4 50
0 100
7 40
1 110
7 40
10 40 20 30
Invalid
10 40 20 30 50
100 10 40 20 30 50
Invalid
100 110 10 40 20 30 50
100 110 10 40 20 30 50 40

*/
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int insertAtIndex(Node *&head, int idx, int value)
{
    if (idx < 0)
    {
        cout << "Invalid" << endl;
        return 0;
    }
    Node *newNode = new Node(value);
    if (idx == 0)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        Node *cur = head;
        for (int i = 0; i < idx - 1; ++i)
        {
            if (cur == NULL)
            {
                cout << "Invalid" << endl;
                delete newNode;
                return 0;
            }
            cur = cur->next;
        }

        if (cur == NULL)
        {
            cout << "Invalid" << endl;
            delete newNode;
            return 0;
        }
        newNode->next = cur->next;
        cur->next = newNode;
    }
    return 1;
}
void deleteList(Node *head)
{
    while (head != NULL)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}
int main()
{
    Node *head = NULL;
    Node *cur = NULL;
    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        if (head == NULL)
        {
            head = new Node(val);
            cur = head;
        }
        else
        {
            cur->next = new Node(val);
            cur = cur->next;
        }
    }
    int q;
    cout << endl;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int idx, qval;
        cin >> idx >> qval;
        if (insertAtIndex(head, idx, qval))
        {
            printList(head);
        }
    }
    deleteList(head);
    return 0;
}
