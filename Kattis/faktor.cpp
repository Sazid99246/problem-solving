#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    double i;
    cin >> a >> i;
    i -= 0.99;
    long long s = ceil(a * i);
    cout << s << endl;
    return 0;
}
