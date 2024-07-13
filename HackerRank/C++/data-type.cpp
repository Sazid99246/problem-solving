#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    int i;
    long long l;
    char c;
    float f;
    double d;
    cin >> i >> l >> c >> f >> d;
    cout << i << endl
         << l << endl
         << c << endl;
    cout << fixed << setprecision(3) << f << endl;
    cout << fixed << setprecision(9) << d << endl;
    return 0;
}
