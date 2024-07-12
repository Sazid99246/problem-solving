#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int needed_time = x * y;
        int total_time = z * 24 * 60;
        string result = needed_time <= total_time ? "YES" : "NO";
        cout << result << endl;
    }
    
    return 0;
}
