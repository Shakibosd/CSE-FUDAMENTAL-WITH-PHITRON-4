/*
Question: Take a singly linked list as input, then print the maximum value of them.



Sample Input
Sample Output
2 4 1 3 5 4 2 5 -1
5
5 4 1 2 5 6 8 4 1 3 -1
8

*/
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
int findMax(Node *head)
{
    int maxVal = INT_MIN;
    while (head != NULL)
    {
        if (head->data > maxVal)
        {
            maxVal = head->data;
        }
        head = head->next;
    }
    return maxVal;
}
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    int val;
    Node *head = NULL;
    Node *tail = NULL;
    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    printList(head);
    int maxVal = findMax(head);
    cout << maxVal << endl;
    while (head != NULL)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}
