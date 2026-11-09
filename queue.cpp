#include<iostream>
#define MAX_SIZE 100
using namespace std;
int Queue[MAX_SIZE], frnt=0, bck=0;
int Size()
{
    return bck-frnt;
}
bool Empty()
{
    return Size() == 0;
}
int Front()
{
    if(!Empty())
    {
        return Queue[frnt];
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
        return Queue[bck-1];
    }
    else
    {
        return -1;
    }
}
void Push(int v)
{
    if(bck < MAX_SIZE)
    {
        Queue[bck] = v;
        bck++;
    }
    else
        cout << "Queue overflow";
}
void Pop()
{
    if(!Empty())
    {
        frnt++;
    }
    else
        cout << "Queue underflow";
}
int main()
{
    Push(10);
    Push(20);
    Push(30);
    Push(40);
    Push(50);
    Push(60);
    Push(70);
    cout << Front() << endl;
    cout << Back() << endl;
    cout << Size() << endl;
    cout << Empty() << endl;
    Pop();
    Pop();
    Pop();
    Pop();
    Pop();
    Pop();
    Pop();

    cout << Front() << endl;
    cout << Back() << endl;
    cout << Size() << endl;
    cout << Empty() << endl;
    
}