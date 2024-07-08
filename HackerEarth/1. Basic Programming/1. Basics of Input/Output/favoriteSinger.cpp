#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<long long, int> freqMap; // Using unordered_map for dynamic size handling

    // Read the singers into nums array and count frequencies
    long long singer;
    for (int i = 0; i < n; i++)
    {
        cin >> singer;
        freqMap[singer]++;
    }

    // Find the maximum frequency
    int maxFreq = 0;
    for (auto &entry : freqMap)
    {
        if (entry.second > maxFreq)
        {
            maxFreq = entry.second;
        }
    }

    // Count the number of singers with the maximum frequency
    int favSingersCount = 0;
    for (auto &entry : freqMap)
    {
        if (entry.second == maxFreq)
        {
            favSingersCount++;
        }
    }

    cout << favSingersCount << endl;

    return 0;
}
