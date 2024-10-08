#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n, total_used = 0;
    cin >> x >> n;
    int total_got = n * x + x;
    while (n--)
    {
        int p;
        cin >> p;
        total_used += p;
    }
    cout << total_got - total_used << endl;
    
    return 0;
}
