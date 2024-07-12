#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *problemsSolved = new int[4];
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> problemsSolved[i];
    }
    for (int i = 0; i < 4; i++)
    {
        if (problemsSolved[i] >= 10)
        {
            count++;
        }
    }
    cout << count << endl;
    delete[] problemsSolved;
    return 0;
}
