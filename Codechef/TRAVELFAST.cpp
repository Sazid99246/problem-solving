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
        if (x < y)
        {
            cout << "BIKE" << endl;
        }
        else if (y < x)
        {
            cout << "CAR" << endl;
        }
        else
        {
            cout << "SAME" << endl;
        }
        
    }
    
    return 0;
}
