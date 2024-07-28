#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        while (n--)
        {
            int x;
            cin >> x;
            if (x >= 1000)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    
    return 0;
}
