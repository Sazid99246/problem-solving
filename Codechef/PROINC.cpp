#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        int initial_price = x - y;
        int new_price = x + x * 0.1;
        int new_profit = new_price - initial_price;
        cout << new_profit << endl;
    }
    
    return 0;
}
