#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true; // 2 is the only even prime number
    if (n % 2 == 0)
        return false; // other even numbers are not prime
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        string result = is_prime(a + b) ? "Alice" : "Bob";
        cout << result << endl;
    }
    return 0;
}
