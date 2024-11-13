/*
Question: Take a singly linked list as input and print the size of the linked list.

Sample Input
2 1 5 3 4 8 9 -1
Sample Output
7
Sample Input
5 1 4 5 -1
Sample Output
4
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
int getSize(Node *head)
{
    int size = 0;
    while (head != nullptr)
    {
        size++;
        head = head->next;
    }
    return size;
}
void printSize(Node *head)
{
    int size = getSize(head);
    cout << size << endl;
}
void deleteLinkedList(Node *head)
{
    while (head != NULL)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}
Node *buildLinkedListFromInput()
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
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            cur = head;
        }
        else
        {
            cur->next = newNode;
            cur = newNode;
        }
    }
    return head;
}
int main()
{
    Node *head1 = buildLinkedListFromInput();
    printSize(head1);
    deleteLinkedList(head1);
    Node *head2 = buildLinkedListFromInput();
    printSize(head2);
    deleteLinkedList(head2);
    return 0;
}
