#include <bits/stdc++.h>
using namespace std;

int getPerimiter(int n, int m)
{
    return 2 * (n + m);
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m, x;
        cin >> n >> m >> x;
        cout << getPerimiter(n, m) * x << endl;
    }

    return 0;
}
