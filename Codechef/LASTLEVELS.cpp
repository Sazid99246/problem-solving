#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int interval = x % 3 == 0 ? x / 3 - 1 : x / 3;
        cout << x * y + z * interval << endl;
    }
    
    return 0;
}
