/*Question: Take two doubly linked lists as input and check if they are the same or not.

Sample Input
Sample Output
10 20 30 40 50 -1
10 20 30 40 50 -1
YES
10 20 30 40 50 -1
10 20 30 40 -1
NO
10 20 30 40 -1
10 20 30 40 50 -1
NO
10 20 30 40 -1
40 30 20 10 -1
NO
1 2 3 4 5 -1
5 4 1 2 6 -1
NO

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
int areListsEqual(Node *head1, Node *head2)
{
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data != head2->data)
        {
            return 0;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    if (head1 != NULL || head2 != NULL)
    {
        return 0;
    }
    return 1;
}
Node *createListFromInput()
{
    Node *head = NULL;
    Node *tail = NULL;
    string input;
    getline(cin, input);
    stringstream iss(input);
    int value;
    while (iss >> value && value != -1)
    {
        Node *newNode = new Node(value);
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
    Node *head1 = createListFromInput();
    Node *head2 = createListFromInput();
    if (areListsEqual(head1, head2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
