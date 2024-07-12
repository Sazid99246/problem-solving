#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int count = 0;
        for (int i = 0; i < 5; i++)
        {
            int r;
            cin >> r;
            if (r == 1)
            {
                count++;
            }
        }
        if (count >= 4)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }

    return 0;
}
