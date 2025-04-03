// Print Fibonacci Series Up to a Given Number

#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << "Fibonacci series : [ ";
    for (int i = 0; i < n; i++)
    {
        cout << fibonacci(i);
        if (i != n - 1)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    return 0;
}