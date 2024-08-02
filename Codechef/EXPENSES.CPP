#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int total_expenses = pow(2, x);

        while (n > 0)
        {
            total_expenses /= 2;
            n -= 1;
        }
        cout << total_expenses << endl;
    }

    return 0;
}
