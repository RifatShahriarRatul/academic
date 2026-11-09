#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* Append(Node* root, int v)
{
    Node *newnode = new Node();
    newnode -> data = v;
    newnode -> next = NULL;
    if(root == NULL)
    {
        root = newnode;
    }
    else{
        Node* curnode = root;
        while(curnode -> next != NULL)
        {
            curnode = curnode -> next;
        }
        curnode -> next = newnode;
    }
    return root;
}
// 5->10->15->20     6 at 3rd place
Node* Insert(Node* root, int v, int pos)
{
    Node *newnode = new Node();
    newnode -> data = v;
    newnode -> next = NULL;
    if(pos == 1)
    {
        newnode -> next = root;
        root = newnode;
    }
    else{
        Node* curnode = root;
        for(int i=1; i < pos-1; i++)
        {
            curnode = curnode -> next;
        }
        newnode -> next =  curnode -> next;
        curnode -> next = newnode;
    }
    return root;
}
Node* SortedInsert(Node* root, int v)
{
    Node *newnode = new Node();
    newnode -> data = v;
    newnode -> next = NULL;
    Node *prevnode, *curnode;
    curnode = root;
    prevnode = NULL;
    if(root == NULL)
    {
        root = newnode;
    }
    else
    {
        while(curnode != NULL)
        {
            if(curnode -> data > v)
            {
                if(curnode == root)
                {
                    newnode -> next = root;
                    root = newnode;
                    break;
                }
                else
                {
                    prevnode -> next = newnode; 
                    newnode -> next = curnode;
                    break;
                }
            }
            else
            {
                prevnode = curnode;
                curnode = curnode -> next;
            }
        }
        if(curnode == NULL)
        {
            prevnode -> next = newnode;
        }
    }
    return root;
}
Node* Delete(Node* root, int v)
{
    Node *curnode , *prevnode;
    curnode = root;
    prevnode = NULL;
    while(curnode != NULL)
    {
        if(curnode -> data == v)
        {
            if(curnode == root)
            {
                root = curnode -> next;
                delete(curnode);
                break;
            }
            else
            {
                prevnode -> next = curnode -> next;
                delete(curnode);
                break;
            }
        }
        else
        {
            prevnode = curnode;
            curnode = curnode -> next;
        }
    }
    return root;
}
void Search(Node* root, int v)
{
    Node *curnode = root;
    int found;
    while(curnode != NULL)
    {
        if(curnode -> data == v)
        {
            cout << endl << "Found";
            return;
        }
        else
        {
            curnode = curnode -> next;
        }
    }
    cout << endl << "Not found";
}
int Count(Node* root, int v)
{
    Node* curnode = root;
    int count=0;
    while (curnode != NULL)
    {
        if(curnode -> data == v)
        {
            count++;
        }
        curnode = curnode -> next;
    }
    return count;

}
void Print(Node* root)
{
    Node* curnode = root;
    while(curnode != NULL)
    {
        cout << curnode -> data << " ";
        curnode = curnode -> next;
    }
}
int main()
{
    Node* root;
    root = NULL;
    root = Append(root,5);
    root = Append(root,10);
    root = Append(root,8);
    root = Append(root,7);
    root = Append(root,19);
    root = Append(root,15);
    root = Insert(root, 45, 7);
    root = SortedInsert(root, 13);
    root = Delete(root, 19);
    Print(root);
    Search(root, 3);
    cout << endl << Count(root, 7);
}