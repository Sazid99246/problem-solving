#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int per_person = n / (k + 1);
        int net_worth = n - k * per_person;
        cout << net_worth << endl;
    }
    
    return 0;
}
