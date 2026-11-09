#include<iostream>
using namespace std;
// Linked List

struct Node
{
    int data;
    Node* next;
};

Node* head = NULL;
Node* tail = NULL;
int frnt = 0, bck = 0;
void Print()
{
    Node* curnode = head;
    while(curnode != NULL)
    {
        cout << curnode -> data << " ";
        curnode = curnode -> next;
    }
}

// Queue

int Size()
{
    return bck - frnt;
}
bool Empty()
{
    return Size() == 0;
}
void Push(int v)
{
    Node* newnode = new Node();
    newnode -> data = v;
    newnode -> next = NULL;
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail -> next = newnode;
        tail = newnode;
    }
    bck++;
}
void Pop()
{
    if(!Empty())
    {
        Node* temp = head;
        head = head -> next;
        delete(temp);
        frnt++;
        if(head == NULL)
            tail = NULL;
    }
    else
    {
        cout << "Queue Underflow" << endl;
    }
}
int Front()
{
    if(!Empty())
    {
        return head -> data ;
    }
    else
    {
        return -1;
    }
}
int Back()
{
    if(!Empty())
    {
        return tail -> data ;
    }
    else
    {
        return -1;
    }
}
int main()
{
    Push(10);
    Push(11);
    Push(12);
    Push(13);
    Push(14);
    Push(15);
    Pop();
    Pop();
    Print();
    cout << endl << Front();
    cout << endl << Back();
    
}