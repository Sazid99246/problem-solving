#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int result = a > b ? a - b : a + b;
    cout << result << endl;
    return 0;
}
