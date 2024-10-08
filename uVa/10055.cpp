#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, y;
    while ((scanf("%lld %lld", &x, &y)) != EOF)
    {
        long long result = x > y ? x - y : y - x;
        cout << result << endl;
    }

    return 0;
}
