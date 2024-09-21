#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, x, a, b;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    cin >> x >> a >> b;

    v.erase(v.begin() + (x - 1));
    v.erase(v.begin() + (a - 1), v.begin() + (b - 1));

    cout << v.size() << endl;

    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}
