#include <bits/stdc++.h>
using namespace std;

int second_largest(int a, int b, int c)
{
    if (a > b && a > c)
    {
        if (b > c)
            return b;
        else
            return c;
    }
    else if (b > a && b > c)
    {
        if (a > c)
            return a;
        else
            return c;
    }
    else if (a > b)
        return a;
    else
        return b;
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;

    while (t--)
    {
        int a1, a2, a3, b1, b2, b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
        int alice = max(a1, max(a2, a3)) + second_largest(a1, a2, a3);
        int bob = max(b1, max(b2, b3)) + second_largest(b1, b2, b3);

        if (alice > bob)
        {
            cout << "Alice" << endl;
        }
        else if (bob > alice)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
    }

    return 0;
}
