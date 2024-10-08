#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int result = abs((((((((n * 567) / 9) + 7492) * 235) / 47) - 498) % 100) / 10);
        cout << result << endl;
    }

    return 0;
}
