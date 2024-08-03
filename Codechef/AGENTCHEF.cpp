#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        double x;
        cin >> x;
        double insurence = x * 0.2;
        cout << ceil(100 / insurence) << endl;
    }
    
    return 0;
}
