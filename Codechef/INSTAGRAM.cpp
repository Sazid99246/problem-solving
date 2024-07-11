#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        string result = x > y * 10 ? "YES" : "NO";
        cout << result << endl;
    }

    return 0;
}
