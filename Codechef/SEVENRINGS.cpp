#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        long long total = n * x;
        int count = 0;
        while (total > 0)
        {
            total /= 10;
            count++;
        }

        string result = count == 5 ? "YES" : "NO";
        cout << result << endl;
    }

    return 0;
}
