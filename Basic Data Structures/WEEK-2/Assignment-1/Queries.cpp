/*Problem Statement

You have a singly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

If X is 0 that means you will insert the value V to the head of the linked list.
If X is 1 then you will insert the value V to the tail of the linked list.
If X is 2 then you will delete the value Vth index of the linked list. Assume that index starts from 0. If the index is invalid, then you shouldn't perform the deletion.
After each query you need to print the linked list.
Note: You must use singly linked list, otherwise you will not get marks.

Input Format

First line will contain Q.
Next Q lines will contain X and V.
Constraints

1 <= Q <= 1000;
0 <= X <= 2;
0 <= V <= 10^9
Output Format

For each query ouput the updated linked list.
Sample Input 0

4
0 10
1 20
1 30
0 40
Sample Output 0

10
10 20
10 20 30
40 10 20 30
Sample Input 1

11
0 10
2 5
1 20
1 30
0 40
2 0
0 50
2 2
1 60
2 3
2 3
Sample Output 1

10
10
10 20
10 20 30
40 10 20 30
10 20 30
50 10 20 30
50 10 30
50 10 30 60
50 10 30
50 10 30
Sample Input 2

10
1 4
2 1
0 9
0 10
2 2
1 5
2 0
2 1
2 5
2 2
Sample Output 2

4
4
9 4
10 9 4
10 9
10 9 5
9 5
9
9
9 */

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
void insert_at_head(node *&head, int val)
{
    node *newNode = new node(val);
    newNode->next = head;
    head = newNode;
}
void insert_at_tail(node *&head, int val)
{
    node *newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    tail->next = newNode;
}

void delete_at_node(node *&head, int pos)
{
    if (head == NULL)
    {
        return;
    }
    if (pos == 0)
    {
        node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    node *tail = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tail = tail->next;
    }
    if (tail == NULL || tail->next == NULL)
    {
        return;
    }
    node *tmp = tail->next;
    tail->next = tail->next->next;
    delete tmp;
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
void print_at_linkd_list(node *&head)
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
    int q;
    cin >> q;
    node *head = NULL;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, v);
        }
        else if (x == 2 && v < size(head))
        {
            delete_at_node(head, v);
        }
        print_at_linkd_list(head);
    }
    return 0;
}
