//  Find All Prime Numbers in a 2D Array

#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

vector<int> findPrimes(const vector<vector<int>> matrix)
{
    vector<int> primes;
    for (const auto &row : matrix)
    {
        for (int num : row)
        {
            if (isPrime(num))
            {
                primes.push_back(num);
            }
        }
    }
    return primes;
}

int main()
{
    vector<vector<int>> arr = {{2, 4, 6}, {3, 5, 8}, {9, 11, 12}};

    cout << "Prime numbers in the array: ";
    for (int prime : findPrimes(arr))
    {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}
