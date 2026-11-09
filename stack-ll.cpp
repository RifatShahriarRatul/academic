#include<iostream>
using namespace std;
// Linked List

struct Node
{
    int data;
    Node* next;
};

Node* head = NULL;
int top = 0;
void Print()
{
    Node* curnode = head;
    while(curnode != NULL)
    {
        cout << curnode -> data << " ";
        curnode = curnode -> next;
    }
}

// Stack

int Size()
{
    return top;
}
bool Empty()
{
    return Size() == 0;
}
void Push(int v)
{
    Node* newnode = new Node();
    newnode -> data = v;
    newnode -> next = head;
    head = newnode;
    top++;
}
void Pop()
{
    if(!Empty())
    {
        Node* temp = head;
        head = head -> next;
        delete(temp);
        top--;
    }
    else
    {
        cout << "Stack Underflow" << endl;
    }
}
int Top()
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
int main()
{
    // Push(10);
    // Push(11);
    // Push(12);
    // Push(13);
    // Print();
    // Pop();
    // Print();
    // cout << endl << Top();
    // Pop();
    // Pop();
    // Pop();
    // Pop();
    // Pop();
    // Pop();
    // Pop();
    
}