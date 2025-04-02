#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int index;
    int size;

    Stack(int n)
    {
        this->size = n;
        arr = new int[n];
        index = -1;
    }

    void push(int val)
    {
        if (index < this->size)
        {
            arr[++index] = val;
        }
        else
        {
            cout << "ERROR" << endl;
        }
    }

    void pop()
    {
        if (index != -1)
        {
            arr[index--] = -1;
        }
        else
        {
            cout << "ERROR" << endl;
        }
    }

    int top()
    {
        if (index != -1)
        {
            return arr[index];
        }
        else
        {
            cout << "ERROR" << endl;
        }
    }

    int length()
    {
        return index + 1;
    }

    bool isEmpty()
    {
        if (index == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void print()
    {
        for (int i = 0; i <= this->index; i++)
        {
            cout << arr[i] << endl;
        }
    }
};

main()
{
    Stack *stk = new Stack(3);
    stk->push(10);
    stk->push(20);
    stk->push(30);
    stk->pop();
    cout << stk->top();
    cout << stk->length();
    cout<<stk->isEmpty();
    stk->print();
    return 0;
}