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
        int two_steps = x / y;
        int one_step = x % y;
        cout << two_steps + one_step << endl;
    }
    
    return 0;
}
