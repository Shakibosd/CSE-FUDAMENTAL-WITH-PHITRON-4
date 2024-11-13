/*
Question: Take a doubly linked list as input and reverse it. After that print the linked list.

Sample Input
Sample Output
10 20 30 -1
30 20 10


10 20 30 40 -1
40 30 20 10

*/
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
Node *reverseList(Node *head)
{
    Node *cur = head;
    Node *temp = NULL;
    while (cur != NULL)
    {
        temp = cur->prev;
        cur->prev = cur->next;
        cur->next = temp;
        cur = cur->prev;
    }
    if (temp != NULL)
    {
        head = temp->prev;
    }
    return head;
}
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data;
        
        if (head->next != NULL)
        {
            cout << " ";
        }
        head = head->next;
    }
}
Node *createListFromInput()
{
    Node *head = NULL;
    Node *tail = NULL;
    string input;
    getline(cin, input);
    stringstream iss(input);

    int val;
    while (iss >> val && val != -1)
    {
        Node *newNode = new Node(val);
        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    return head;
}
int main()
{
    Node *head = createListFromInput();
    head = reverseList(head);
    printList(head);
    while (head != NULL)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}
