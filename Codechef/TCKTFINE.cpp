#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, q, p;
        cin >> x >> p >> q;
        cout << (p - q) * x << endl; 
    }

    return 0;
}
