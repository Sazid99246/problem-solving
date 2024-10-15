#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while (cin >> t)
    {
        int n, count = 0;
        for (int i = 0; i < 5; i++)
        {
            cin >> n;
            if (n == t)
                count++;
        }
        cout << count << endl;
    }

    return 0;
}
