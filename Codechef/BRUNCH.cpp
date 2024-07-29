#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int filled = x / y >= 20 ? 20 : x / y;
        cout << filled << endl;
    }
    
    return 0;
}
