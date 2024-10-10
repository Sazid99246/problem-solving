#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        if (s.length() == 3)
        {
            int one_count = (s[0] == 'o') + (s[1] == 'n') + (s[2] == 'e');
            if (one_count >= 2)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
        else
        {
            cout << 3 << endl;
        }
    }

    return 0;
}
