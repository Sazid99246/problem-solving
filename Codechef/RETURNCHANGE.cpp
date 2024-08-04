#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;
        if (x % 10 < 5)
            x = x - (x % 10);
        else
            x = (x - (x % 10)) + 10;
        cout << 100 - x << endl;
    }
    
    return 0;
}
