#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> turtles;
        int n;
        while (true)
        {
            cin >> n;
            if (n == 0)
            {
                break;
            }
            turtles.push_back(n);
        }

        int total = 0;

        for (int i = 0; i < turtles.size() - 1; i++)
        {
            if (turtles[i + 1] > turtles[i] * 2)
            {
                total += (turtles[i + 1] - turtles[i] * 2);
            }
        }
        cout << total << endl;
    }

    return 0;
}
