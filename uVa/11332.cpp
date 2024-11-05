#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(long long n)
{
    if (n == 0)
        return 0;
    return n % 10 + sumOfDigits(n / 10);
}

int g(long long n)
{
    if (n < 10)
        return n;
    return g(sumOfDigits(n));
}

int main()
{
    long long n;
    while (n != 0)
    {
        cin >> n;
        if (n == 0)
            break;
        cout << g(n) << endl;
    }
    
    return 0;
}
