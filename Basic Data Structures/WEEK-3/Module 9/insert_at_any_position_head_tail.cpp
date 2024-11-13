#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node *prev;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_doubly_linked_list(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
// void print_revers_doubly_linked_list(node* tail){
//     node* tmp = tail;
//     while(tmp!=NULL){
//         cout<<tmp->val<<" ";
//         tmp = tmp->prev;
//     }
//     cout<<endl;
// }
void insert_any_position(node *head, int pos, int val)
{
    node *newNode = new node(val);
    node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}
int size(node *head)
{
    node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insert_at_head(node *&head, node *&tail, int val)
{
    node *newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_at_tail(node *&head, node *&tail, int val)
{
    node *newNode = new node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
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
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;

    int pos, val;
    cin >> pos >> val;

    if (pos > size(head))
    {
        cout << "Invalid Index" << endl;
    }
    else if (pos == 0)
    {
        insert_at_head(head, tail, val);
    }
    else if (pos == size(head))
    {
        insert_at_tail(head, tail, val);
    }
    else
    {
        insert_any_position(head, pos, val);
    }
    print_doubly_linked_list(head);
    // print_revers_doubly_linked_list(tail);
    return 0;
}