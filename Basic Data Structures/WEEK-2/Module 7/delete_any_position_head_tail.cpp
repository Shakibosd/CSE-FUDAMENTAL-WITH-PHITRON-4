// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int val;
//     node *next;
//     node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };
// void delete_at_any_position(node *head, int pos)
// {
//     node *tmp = head;
//     for (int i = 1; i <= pos - 1; i++)//O(N)
//     {
//         tmp = tmp->next;
//     }
//     node *deleteNode = tmp->next;
//     tmp->next = tmp->next->next;
//     delete deleteNode;
// }
// int size(node* head){
//     node* tmp = head;
//     int cnt = 0;
//     while(tmp!=NULL){//O(N)
//         cnt++;
//         tmp = tmp->next;
//     }
//     return cnt;
// }
// void print_linked_list(node *head)
// {
//     node *tmp = head;
//     while (tmp != NULL)
//     { // O(N)
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
//     cout << endl;
// }
// void delete_at_head(node *&head){//O(N)
//     node* deleteNode = head;
//     head = head->next;
//     delete deleteNode;
// }
// int main()
// {
//     node *head = new node(10);
//     node *a = new node(20);
//     node *b = new node(30);
//     node *c = new node(40);
//     node *d = new node(50);
//     node *tail = d;

//     head->next = a;
//     a->next = b;
//     b->next = c;
//     c->next = d;

//     int pos;
//     cin >> pos;
//     if(pos>=size(head)){
//         cout<<"Invalid Index"<<endl;
//     }
//     else if(pos == 0){
//         delete_at_head(head);
//     }
//     else{
//         delete_at_any_position(head, pos);
//     }
//     print_linked_list(head);
//     return 0;
// }
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
void delete_at_any_position(node *head, int pos)
{
    node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
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
void delete_at_head(node *&head)
{
    node *deleteNode = head;
    head = head->next;
    delete deleteNode;
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

    int pos;
    cin >> pos;
    if (pos >= size(head))
    {
        cout << "Invalid Index" << endl;
    }
    else if (pos == 0)
    {
        delete_at_head(head);
    }
    else
    {
        delete_at_any_position(head, pos);
    }
    print_linekd_list(head);
    return 0;
}