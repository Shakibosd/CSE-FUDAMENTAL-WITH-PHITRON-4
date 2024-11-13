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
void insert_at_tail(node *&head, node *&tail, int val)
{
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
void print_linekd_list(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    int val;
    while (1)
    {
        cin >> val;
        if (val == (-1))
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    print_linekd_list(head);
    return 0;
}