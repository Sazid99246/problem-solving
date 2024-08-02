#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, problem_a, problem_b;
        cin >> x >> y;

        int a_then_b = 500 - x * 2 + 1000 - ((x + y) * 4);
        int b_then_a = 1000 - y * 4 + 500 - ((x + y) * 2);

        cout << max(a_then_b, b_then_a) << endl;
    }

    return 0;
}
