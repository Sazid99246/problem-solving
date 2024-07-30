#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double x, y;
        cin >> x >> y;
        cout << ceil((y - x) / 8) << endl;
    }
    
    return 0;
}
