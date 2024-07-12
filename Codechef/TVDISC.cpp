#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int firstTV = a - c;
        int secondTV = b - d;
        if (firstTV < secondTV)
        {
            cout << "First" << endl;
        }
        else if (secondTV < firstTV)
        {
            cout << "Second" << endl;
        }
        else
        {
            cout << "Any" << endl;
        }
    }
    
    return 0;
}
