#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, h;
        cin >> x >> h;
        string result = x >= h ? "YES" : "NO";
        cout << result << endl;
    }
    
    return 0;
}
