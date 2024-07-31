#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string result = n > m ? "YES" : "NO";
        cout << result << endl;
    }

    return 0;
}
