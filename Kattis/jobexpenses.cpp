#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if (k < 0)
            sum += k;
    }
    cout << abs(sum);
    return 0;
}
