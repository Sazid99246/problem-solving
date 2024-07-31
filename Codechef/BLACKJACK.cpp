#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int c = 21 - (a + b);
        int result = c < 1 || c > 10 ? -1 : c;
        cout << result << endl;
    }
    
    return 0;
}
