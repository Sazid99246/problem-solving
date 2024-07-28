#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double n;
        cin >> n;
        int max_children = ceil(n / 2);
        cout << max_children << " " << n << endl;
    }

    return 0;
}
