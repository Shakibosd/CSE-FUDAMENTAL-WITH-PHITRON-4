/*Question: Take a singly linked list as input and check if the linked list contains any duplicate value. You can assume that the maximum value will be 100.


Sample Input
Sample Output
5 4 8 6 2 1 -1
NO


2 4 5 6 7 4 -1
YES
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
int hasDuplicates(Node *head)
{
    unordered_set<int> seen;
    while (head != NULL)
    {
        if (seen.find(head->data) != seen.end())
        {
            return 1;
        }
        seen.insert(head->data);
        head = head->next;
    }
    return 0;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
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
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    if (hasDuplicates(head))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    Node *cur = head;
    while (cur != NULL)
    {
        Node *nextNode = cur->next;
        delete cur;
        cur = nextNode;
    }
    return 0;
}
