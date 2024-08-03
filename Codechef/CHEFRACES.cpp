#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        int count = 2;
        
        if (x == a || x == b)
            count--;
        if (y == a || y == b)
            count--;
        
        cout << count << endl;
    }

    return 0;
}
