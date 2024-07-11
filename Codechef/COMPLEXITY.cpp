#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        string result = a > b ? "YES" : "NO";
        cout << result << endl;
    }

    return 0;
}
