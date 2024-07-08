#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long x;
        cin >> x;
        string result = x >= 67 && x <= 45000 ? "YES" : "NO";
        cout << result << endl;
    }
    
    return 0;
}
