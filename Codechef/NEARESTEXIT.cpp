#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string exit = x <= 50 ? "LEFT" : "RIGHT";
        cout << exit << endl;
    }
    
    return 0;
}
