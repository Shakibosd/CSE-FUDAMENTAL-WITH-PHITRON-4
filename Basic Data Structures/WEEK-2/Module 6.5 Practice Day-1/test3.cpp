/*Question: Take a singly linked list as input and print the middle element. If there are multiple values in the middle print both.



Sample Input
Sample Output
2 4 6 8 10 -1
6
1 2 3 4 5 6 -1
3 4

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
void printMiddle(Node *head)
{
    if (head == NULL)
    {
        cout << "Empty list" << endl;
        return;
    }
    Node *slow = head;
    Node *fast = head;
    Node *prev = NULL;
    while (fast != NULL && fast->next != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if (fast == NULL)
    {
        cout << prev->data << " " << slow->data << endl;
    }
    else
    {
        cout << slow->data << endl;
    }
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
    printMiddle(head);
    deleteList(head);
    return 0;
}
