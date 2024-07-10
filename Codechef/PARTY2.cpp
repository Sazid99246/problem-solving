#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, x, k;
        cin >> n >> x >> k;
        string result = n * x <= k ? "YES" : "NO";
        cout << result << endl;
    }
    
    return 0;
}
