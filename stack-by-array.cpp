#include <iostream>
// stack implementation using array
using namespace std;
class Stack
{
    int *arr;
    int size;
    int top;
    bool flag = 1;

public:
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[size];
    }
    void Push(int value)
    {
        if (top == size - 1)
        {
            cout << "\nStack is full" << endl;
        }
        else
        {
            top++;
            arr[top] = value;
            cout << "\n the " << value << " added in stack";
            flag = 0;
        }
    }
    void Pop()
    {
        if (top == -1)
        {
            cout << "\nStack is empty";
        }
        else
        {
            cout << "\npopped the " << arr[top];
            top--;
            if (top == -1)
                flag = 1;
        }
    }

    int Peek()
    {
        if (top == -1)
        {
            cout << "\nStack is empty" << endl;
        }
        else
        {
            return arr[top];
        }
    }

    bool IsEmpty()
    {
        if (top == -1)
        {
            return top == -1;
        }
    }

    int IsSize()
    {
        return top + 1;
    }
};
int main()
{

    Stack s(5);
    s.Push(10);
    s.Push(20);
    s.Push(30);
    s.Push(40);
    s.Push(50);
    s.Pop();
    cout << "\n"
         << s.Peek();
    cout << s.IsEmpty();

    return 0;
}