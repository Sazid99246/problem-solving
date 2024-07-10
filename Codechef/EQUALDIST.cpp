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
        int total = x + y;
        string result = total % 2 == 0 ? "YES" : "NO";
        cout << result << endl;
    }
    return 0;
}
