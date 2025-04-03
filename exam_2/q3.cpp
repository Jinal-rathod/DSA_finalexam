//  Print Characters with Frequency in a String

#include <iostream>
#include <map>
using namespace std;

int main()
{
    string str = "hello world";
    map<char, int> freqmap;

    for (char ch : str)
    {
        if (freqmap.find(ch) != freqmap.end())
        {
            freqmap[ch] = freqmap[ch] + 1;
        }
        else
        {
            freqmap[ch] = 1;
        }
    }
    for (const auto &pair : freqmap)
    {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}
