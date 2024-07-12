#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int first = n;
        int sum = 0;
        while (first >= 10)
        {
            first /= 10;
        }
        int last = n % 10;
        cout << first + last << endl;
    }

    return 0;
}
