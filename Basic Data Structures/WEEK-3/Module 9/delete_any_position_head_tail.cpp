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
void delete_any_postiton(node *head, int pos)
{
    node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
}
void delete_at_head(node *&head)
{
    node *tmp = head;
    node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    head->prev = NULL;
}
void delete_at_tail(node *&tail)
{
    node *deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    tail->next = NULL;
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

    int pos;
    cin >> pos;
    if (pos >= size(head))
    {
        cout << "Invalid" << endl;
    }
    else if (pos == 0)
    {
        delete_at_head(head);
    }
    else if (pos == size(head) - 1)
    {
        delete_at_tail(tail);
    }
    else
    {
        delete_any_postiton(head, pos);
    }
    print_doubly_linked_list(head);
    // print_revers_doubly_linked_list(tail);
    return 0;
}