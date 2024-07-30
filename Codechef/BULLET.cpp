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
        int result = z - (y / x);
        if (result < 0)
            cout << 0 << endl;
        else
            cout << result << endl;
    }
    
    return 0;
}
