#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        cout << w + (x - y) * z << endl;
    }

    return 0;
}
