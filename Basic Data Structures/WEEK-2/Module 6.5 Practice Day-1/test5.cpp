/*Question: Take a singly linked list as input and check if the linked list is sorted in ascending order.



Sample Input
Sample Output
1 5 6 8 9 -1
YES
2 4 6 5 8 4 -1
NO

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
int isSorted(Node *head)
{
    while (head != NULL && head->next != NULL)
    {
        if (head->data > head->next->data)
        {
            return 0;
        }
        head = head->next;
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
    if (isSorted(head))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    deleteList(head);
    return 0;
}
