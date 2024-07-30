#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sx, sy, cx, cy;
        cin >> sx >> sy >> cx >> cy;
        int steps = sx == cx || sy == cy ? 2 : 1;
        cout << steps << endl;
    }
    
    return 0;
}
