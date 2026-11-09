#include<iostream>
#define MAX_SIZE 5
using namespace std;
int que[MAX_SIZE], frnt=0, bck=0, l=0;

// 0 1 2 3 4
// b   f

int Size()
{
    return l;
}
bool Empty()
{
    return Size() == 0;
}
void Push(int v)
{
    if(l < MAX_SIZE)
    {
        que[bck] = v;
        bck = (bck + 1) % MAX_SIZE;
        l++;
    }
    else
        cout << "Queue Overflow" << endl;
}
void Pop()
{
    if(!Empty())
    {
        frnt = (frnt + 1) % MAX_SIZE;
        l--;
    }
    else
        cout << "Queue Underflow" << endl;
}
void Front()
{
    if(!Empty())
        cout << que[frnt] << endl;
    else
        cout << "Queue Underflow" << endl;
}
void Back()
{
    if(!Empty())
    {
        if(bck == 0)
            cout << que[MAX_SIZE - 1] << endl;
        else
            cout << que[bck - 1] << endl;
    }
    else
        cout << "Queue Underflow" << endl;
}
int main()
{
    Push(1);
    Push(2);
    Push(3);
    Push(4);
    Push(5);
    Pop();
    Push(6);
    Push(7);
    // Pop();
    Pop();
    Pop();
    Pop();
    Pop();
    Back();
    Front();

}