#include <bits/stdc++.h>
using namespace std;
class node{
public:
    int val;
    node *next;
    node *prev;
    node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_doubly_linked_list(node *head){
    node *tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
// void print_revers_doubly_linked_list(node *tail){
//     node *tmp = tail;
//     while (tmp != NULL){
//         cout << tmp->val << " ";
//         tmp = tmp->prev;
//     }
//     cout << endl;
// }
void insert_at_tail(node *&head, node *&tail, int val){
    node *newNode = new node(val);
    if(tail == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
int main(){
    node *head = NULL;
    node *tail = NULL;
    int val;
    while(1){
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    print_doubly_linked_list(head);
    // print_revers_doubly_linked_list(tail);
    return 0;
}