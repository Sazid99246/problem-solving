#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, x;
        cin >> n >> x;
        string result = x * 2 >= n ? "YES" : "NO";
        cout << result << endl;
    }
    
    return 0;
}
