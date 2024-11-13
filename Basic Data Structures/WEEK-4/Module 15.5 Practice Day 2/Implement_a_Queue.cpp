#include <bits/stdc++.h>
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
class Queue
{
public:
    Node *head;
    Node *tail;
    int size;

public:
    Queue()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    bool isEmpty()
    {
        return size == 0;
    }
    void enqueue(int data)

    {
        Node *newNode = new Node(data);
        if (isEmpty())
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }

    int dequeue()

    {
        if (isEmpty())
        {
            return -1;
        }
        int data = head->data;
        Node *temp = head;
        head = head->next;
        delete temp;
        size--;
        if (size == 0)
        {
            tail = NULL;
        }
        return data;
    }

    int front()
    {
        if (isEmpty())
        {
            return -1;
        }
        return head->data;
    }
};