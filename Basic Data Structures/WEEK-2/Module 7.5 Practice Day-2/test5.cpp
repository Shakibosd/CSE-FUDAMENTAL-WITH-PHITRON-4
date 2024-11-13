/*
Question: Take a singly linked list as input and sort it in descending order. Then print the list.



Sample Input
Sample Output
1 4 5 2 7 -1
7 5 4 2 1
20 40 30 10 50 60 -1
60 50 40 30 20 10

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
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
void bubbleSort(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }
    int swapped;
    Node *current;
    Node *lastSorted = NULL;
    do
    {
        swapped = 0;
        current = head;
        while (current->next != lastSorted)
        {
            if (current->data < current->next->data)
            {
                swap(current->data, current->next->data);
                swapped = 1;
            }
            current = current->next;
        }

        lastSorted = current;
    } while (swapped);
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
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    bubbleSort(head);
    printList(head);
    while (head != NULL)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}
