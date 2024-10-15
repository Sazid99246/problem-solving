#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int problems[13];
        for (int i = 0; i < 13; i++)
        {
            cin >> problems[i];
        }
        string result = "Yes";
        for (int i = 0; i < 13; i++)
        {
            if (problems[i] == 0)
            {
                result = "No";
                break;
            }
        }
        cout << "Set #" << i << ": " << result << endl;
    }

    return 0;
}
