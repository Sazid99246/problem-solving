#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double x, y;
        int z;
        cin >> x >> y >> z;
        int jar_filling_time = ceil(x / y);
        cout << jar_filling_time * z << endl;
    }
    
    return 0;
}
