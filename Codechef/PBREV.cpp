#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        bool flag = true;
        cin >> n;
        int *s = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] <= 4)
            {
                flag = false;
                break;
            }
        }

        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        delete[] s;
    }

    return 0;
}
