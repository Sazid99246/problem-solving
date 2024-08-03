#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int p;
        cin >> p;

        int problems = p / 100 + p % 100;
        int result = problems > 10 ? -1 : problems;
        cout << result << endl;
    }
    
    return 0;
}
