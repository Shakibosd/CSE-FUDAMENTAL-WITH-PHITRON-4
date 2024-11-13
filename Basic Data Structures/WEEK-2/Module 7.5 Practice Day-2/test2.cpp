/*Question: Take a singly linked list as input and print the reverse of the linked list.

Sample Input
Sample Output
5 4 8 6 2 1 -1
1 2 6 8 4 5


1 2 3 4 -1
4 3 2 1

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
Node *reverseLinkedList(Node *head)
{
    Node *prev = NULL;
    Node *cur = head;
    Node *next = NULL;
    while (cur != NULL)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}
void printLinkedList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    int val;
    Node *head = NULL;
    Node *tail = NULL;
    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    head = reverseLinkedList(head);
    printLinkedList(head);
    Node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}
