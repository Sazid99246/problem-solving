#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        string result = a + b == c ? "YES" : "NO";
        cout << result << endl;
    }

    return 0;
}
