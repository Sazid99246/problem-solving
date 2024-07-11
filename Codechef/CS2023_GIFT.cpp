#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n, m;
    cin >> x >> n >> m;
    string result = x + m >= n ? "YES" : "NO";
    cout << result << endl;
    return 0;
}
