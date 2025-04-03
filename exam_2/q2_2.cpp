// Two Sum Problem (Find a Pair that Sums to Target) using map

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
    {
        if (map.find(target - arr[i]) != map.end())
        {
            cout << "[" << map[target - arr[i]] << "," << i << "]" << endl;
            break;
        }
        else
        {
            map[arr[i]] = i;
        }
    }
    return 0;
}