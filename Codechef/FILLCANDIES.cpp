#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double n, k, m;
        cin >> n >> k >> m;
        cout << ceil(n / (k * m)) << endl;
    }
    
    return 0;
}
