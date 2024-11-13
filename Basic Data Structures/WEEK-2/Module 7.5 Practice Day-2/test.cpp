/*Question: Take two singly linked lists as input and check if their sizes are same or not.

Sample Input
Sample Output
2 1 5 3 4 9 -1
1 2 3 4 5 6 -1
YES
5 1 4 5 -1
5 1 4 -1
NO

*/
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
int areSizesEqual(Node *head1, Node *head2)
{
    int size1 = 0, size2 = 0;
    while (head1 != NULL)
    {
        size1++;
        head1 = head1->next;
    }
    while (head2 != NULL)
    {
        size2++;
        head2 = head2->next;
    }
    return size1 == size2;
}
void displayResult(int res)
{
    if (res)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    int data;
    Node *head1 = NULL;
    Node *tail1 = NULL;

    while (cin >> data && data != -1)
    {
        Node *newNode = new Node(data);

        if (head1 == NULL)
        {
            head1 = newNode;
            tail1 = newNode;
        }
        else
        {
            tail1->next = newNode;
            tail1 = newNode;
        }
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (cin >> data && data != -1)
    {
        Node *newNode = new Node(data);

        if (head2 == NULL)
        {
            head2 = newNode;
            tail2 = newNode;
        }
        else
        {
            tail2->next = newNode;
            tail2 = newNode;
        }
    }
    int res = areSizesEqual(head1, head2);
    displayResult(res);
    while (head1 != NULL)
    {
        Node *temp = head1;
        head1 = head1->next;
        delete temp;
    }
    while (head2 != NULL)
    {
        Node *temp = head2;
        head2 = head2->next;
        delete temp;
    }
    return 0;
}
