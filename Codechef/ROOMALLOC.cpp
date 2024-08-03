#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int rooms = 0;

        for (int i = 0; i < n; i++)
        {
            int s;
            cin >> s;
            if (s % 2 == 0)
            {
                rooms += s / 2;
            }
            else
            {
                rooms += s / 2 + 1;
            }
        }
        cout << rooms << endl;
    }

    return 0;
}
