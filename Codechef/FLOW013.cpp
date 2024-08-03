#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        string result = a + b + c == 180 ? "YES" : "NO";
        cout << result << endl;
    }

    return 0;
}
