#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        cout << n << (n % 2 == 0 ? " is even" : " is odd") << endl;
    }

    return 0;
}
