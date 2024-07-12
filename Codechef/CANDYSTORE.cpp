#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y, extra = 0;
        cin >> x >> y;
        if (y > x)
        {
            extra = y - x;
            cout << x + extra * 2 << endl;
        }
        else
        {
            cout << y << endl;
        }
        
    }
    
    return 0;
}
