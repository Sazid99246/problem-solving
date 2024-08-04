#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        string result = (x + y) % 2 == 0 ? "Janmansh" : "Jay";
        cout << result << endl;
    }
    
    return 0;
}
