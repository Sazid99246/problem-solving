#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        int cost = x > 300 ? x * 10 : 3000;
        cout << cost << endl;
    }

    return 0;
}
