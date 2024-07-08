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
        string result = n % 3 == 0 ? "YES" : "NO";
        cout << result << endl;
    }
    
}
