// O(N) + O(N) + O(N) + O(N) = O(N).
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void print_linked_list(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    { // O(N)
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int size(node *head)
{
    node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    { // O(N)
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insert_any_position(node *head, int pos, int val)
{
    node *newNode = new node(val);
    node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    { // O(N)
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void insert_at_head(node *&head, int val)
{ // O(1)
    node *newNode = new node(val);
    newNode->next = head;
    head = newNode;
}
void insert_at_tail(node *&head, node *&tail, int val)
{ // O(N)
    node *newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int main()
{
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *d = new node(50);
    node *tail = d;
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    int pos, val;
    cin >> pos >> val;
    if (pos > size(head))
    { // O(1)
        cout << "Invalid Index" << endl;
    }
    else if (pos == 0)
    { // O(1)
        insert_at_head(head, val);
    }
    else if (pos == size(head))
    { // O(1)
        insert_at_tail(head, tail, val);
    }
    else
    { // O(1)
        insert_any_position(head, pos, val);
    }
    print_linked_list(head);
    return 0;
}
