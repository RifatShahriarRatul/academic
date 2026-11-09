#include<iostream>
#define MAX_SIZE 100
using namespace std;
int Stack[MAX_SIZE], top=0;
int Size()
{
    return top;
}
bool Empty()
{
    if(Size() == 0)
        return true;
    else
        return false;
}
int Top()
{
    if(!Empty())
    {
        return Stack[top-1];
    }
    else
    {
        cout << "Empty" << endl;
        return -1;
    }
}
void Push(int v)
{
    if(Size() < MAX_SIZE)
    {
        Stack[top] = v;
        top++;
    }
    else
    {
        cout << "Stack Overflow" << endl;
    }
}
void Pop()
{
    if(!Empty())
    {
        top--;
    }
    else
    {
        cout << "Stack Underflow" << endl;
    }
}
int main()
{
    for(int i=0; i<10; i++)
    {
        Push(i);
        cout << Top();
    }
    Pop();
    Pop();
    Pop();
    Pop();
    Pop();
    Pop();
    cout << endl << Top() << endl << Size() << endl << Empty();
}