/*Question: You have a doubly linked list which is empty initially. You need to take a value Q which refers to queries. For each query you will be given X and V. You will insert the value V to the Xth index of the doubly linked list and print the list in both left to right and right to left. If the index is invalid then print “Invalid”.



Sample Input
Sample Output
6
0 10
1 20
4 30
0 30
1 40
5 50
10
10
10 20
20 10
Invalid
30 10 20
20 10 30
30 40 10 20
20 10 40 30
Invalid

*/
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        data = val;
        next = prev = NULL;
    }
};
class DoublyLinkedList
{
public:
    Node *head;
    DoublyLinkedList()
    {
        head = NULL;
    }
    void insert(int index, int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
        }
        else if (index == 0)
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        else
        {
            Node *temp = head;
            for (int i = 0; i < index - 1; i++)
            {
                if (temp == NULL)
                {
                    cout << "Invalid" << endl;
                    delete newNode;
                    return;
                }
                temp = temp->next;
            }

            if (temp == NULL)
            {
                cout << "Invalid" << endl;
                delete newNode;
                return;
            }
            newNode->next = temp->next;
            if (temp->next != NULL)
            {
                temp->next->prev = newNode;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
        printListLeftToRight();
        printListRightToLeft();
    }
    void printListLeftToRight()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void printListRightToLeft()
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};
int main()
{
    DoublyLinkedList dll;
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        int X, V;
        cin >> X >> V;
        dll.insert(X, V);
    }
    return 0;
}
