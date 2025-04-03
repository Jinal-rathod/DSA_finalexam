// Two Sum Problem (Find a Pair that Sums to Target) using nested loop

#include <iostream>
using namespace std;

void find_sum(int arr[], int n, int target)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "[" << i << "," << j << "]";
                return;
            }
        }
    }
    cout << "No such pair found" << endl;
}

int main()
{
    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    find_sum(arr, n, target);

    return 0;
}