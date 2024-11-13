/*Question: Take a doubly linked list as input and check if it forms any palindrome or not.



Sample Input
Sample Output
10 20 30 20 10 -1
YES
10 20 30 30 20 10 -1
YES
10 20 30 40 20 10 -1
NO
10 20 30 20 40 -1
NO
10 20 30 10 10 -1
NO
10 20 20 20 10 -1
YES

*/
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insertAtEnd(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (!head)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}
int isPalindrome(Node *head)
{
    if (!head || !head->next)
    {
        return 1;
    }
    Node *start = head;
    Node *end = head;

    while (end->next)
    {
        end = end->next;
    }
    while (start != end)
    {
        if (start->data != end->data)
        {
            return 0;
        }
        start = start->next;
        end = end->prev;

        if (start == end)
        {
            break;
        }
    }
    return 1;
}
int main()
{
    Node *head = NULL;
    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insertAtEnd(head, val);
    }

    if (isPalindrome(head))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}