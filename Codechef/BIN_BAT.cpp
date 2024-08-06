#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, a, b;
        cin >> n >> a >> b;
        int match_count = 0;
        while (n > 1)
        {
            match_count++;
            n /= 2;
        }
        cout << match_count * a + (match_count - 1) * b << endl;
    }

    return 0;
}
