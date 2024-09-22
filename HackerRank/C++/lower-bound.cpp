#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, num, q, y;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> y;
        auto it = lower_bound(v.begin(), v.end(), y);
        int index = it - v.begin();
        if (it != v.end() && *it == y)
        {
            cout << "Yes " << index + 1 << endl;
        }
        else
        {
            cout << "No " << index + 1 << endl;
        }
    }

    return 0;
}
