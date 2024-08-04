#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        while (n > 0)
        {
            if (n % 2 != 0)
            {
                count++;
            }
            n /= 2;
        }
        string result = count % 2 == 0 ? "EVEN" : "ODD";
        cout << result << endl;
    }

    return 0;
}
