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
        
        int total_a = a * 10;
        int total_b = b * 5;

        if (total_a > total_b)
        {
            cout << "FIRST" << endl;
        }
        else if (total_a < total_b)
        {
            cout << "SECOND" << endl;
        }
        else
        {
            cout << "ANY" << endl;
        }
        
    }
    
    return 0;
}
