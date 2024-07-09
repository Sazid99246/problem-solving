#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        string result = x >= 80 ? "YES" : "NO";
        cout << result << endl;
    }
    return 0;
}
