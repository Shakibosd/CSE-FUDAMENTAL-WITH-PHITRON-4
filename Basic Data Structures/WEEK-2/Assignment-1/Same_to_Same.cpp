/*Problem Statement

You will be given two singly linked list of integer values as input. You need to check if all the elements of both list are same which means both list are same. If they are same print "YES" otherwise print "NO".

Note: You must use singly linked list, otherwise you will not get marks.

Input Format

First line will contain the values of the first singly linked list, and will terminate with -1.
Second line will contain the values of the second singly linked list, and will terminate with -1.
Constraints

1 <= N1, N2 <= 1000; Here N1 and N2 is the maximum number of nodes of the first and second linked list.
0 <= V <= 1000; Here V is the value of each node.
Output Format

Output "YES" or "NO".
Sample Input 0

10 20 30 40 -1
10 20 30 40 -1
Sample Output 0

YES
Sample Input 1

10 20 30 40 -1
10 20 30 -1
Sample Output 1

NO
Sample Input 2

10 20 30 40 -1
40 30 20 10 -1
Sample Output 2

NO*/

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
void print_at_linkd_list(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int compare_at_node(node *head1, node *head2)
{
    node *tmp1 = head1;
    node *tmp2 = head2;
    int flag = 1;
    while (tmp1 != NULL && tmp2 != NULL)
    {
        if (tmp1->val != tmp2->val)
        {
            flag = 0;
            break;
        }
        else
        {
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
    }
    return flag;
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
int main()
{
    node *head1 = NULL;
    node *tail1 = NULL;
    int val1;
    while (1)
    {
        cin >> val1;
        if (val1 == (-1))
        {
            break;
        }
        insert_at_tail(head1, tail1, val1);
    }
    node *head2 = NULL;
    node *tail2 = NULL;
    int val2;
    while (1)
    {
        cin >> val2;
        if (val2 == (-1))
        {
            break;
        }
        insert_at_tail(head2, tail2, val2);
    }
    int ans = 0;
    if (size(head1) == size(head2))
    {
        ans = compare_at_node(head1, head2);
    }
    if (ans == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}